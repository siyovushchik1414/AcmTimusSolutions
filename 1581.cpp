#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, x, counter = 1;
    cin >> n;
    int l = n;
    vector <int> a;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    if(n == 1)
    {
        cout << 1 << ' ' << a.at(0);
        return 0;
    }
    for(int i = 0; i < l-1; i++)
    {
        if(a.at(i) == a.at(i+1))
        {
            counter+=1;
        }
        else
        {
            cout << counter << ' ' << a.at(i) << ' ';
            counter = 1;
        }
        if(i == l-2 && a.at(i) == a.at(i+1)) cout << counter << ' ' << a.at(i) << ' ';
        if(i == l-2 && a.at(i) != a.at(i+1)) cout << counter << ' ' << a.at(i+1);
    }
}