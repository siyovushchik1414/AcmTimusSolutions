#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int x, y, z, count = 0;
    cin >> x;
    int a[x];
    
    for(int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cin >> y;
    int b[y];

    for(int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    cin >> z;
    int c[z];
    for(int i = 0; i < z; i++)
    {
        cin >> c[i];
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(a[i] == b[j])
            {
                for(int k = 0; k < z; k++)
                {
                    if(a[i] == c[k]) count++;
                }
            }
        }
    }
    cout << count;
}
