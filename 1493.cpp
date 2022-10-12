#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

string separ(int x)
{
    string s = "No";
    int xr[6], xr1[6], xr2[6], o = 5;
    for(int i = 0; i < 6; i++)
    {
        xr[i] = x / int(pow(10,o)) % 10;
        o--;
    }
    o = 5;
    for(int i = 0; i < 6; i++)
    {
        xr1[i] = (x+1) / int(pow(10,o)) % 10;
        o--;
    }
    o = 5;
    for(int i = 0; i < 6; i++)
    {
        xr2[i] = (x-1) / int(pow(10,o)) % 10;
        o--;
    }

    if(xr1[0] + xr1[1] + xr1[2] == xr1[3] + xr1[4] + xr1[5] || xr2[0] + xr2[1] + xr2[2] == xr2[3] + xr2[4] + xr2[5]) cout << "Yes";
    else cout << "No";
    return s;
}


int main()
{
    int x;
    cin >> x;
    separ(x);
}