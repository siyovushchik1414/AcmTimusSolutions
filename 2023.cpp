#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string one[9] = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"}, two[9] = {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"}, three[9] = {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"}, x;
    int n;
    long long pos = 1, stepcount = 0;
    cin >> n;
    
    while(n--)
    {
        cin >> x;
        for(int i = 0; i < 9; i++)
        {
            if(x == one[i])
            {   stepcount += pos - 1;
                pos = 1;
            }
            if(x == two[i])
            {
                if(pos == 1 || pos == 3) stepcount += 1;
                pos = 2;
            }
            if(x == three[i])
            {
                stepcount += 3 - pos;
                pos = 3;
            }
        }
    }
    cout << stepcount;
}