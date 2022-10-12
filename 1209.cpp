#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, o = 0;
    cin >> n;
    long long aha[65600];
    int b[65600] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> aha[i];
        long long r = sqrt(8 * aha[i] - 7);
        if(r * r == 8*aha[i]-7) b[i] = 1;
        else b[i] = 0;
    }
    for(int i = 0; i < n; i++) cout << b[i] << ' ';
}