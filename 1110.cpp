#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <inttypes.h>

using namespace std;

int main()
{
    int64_t a, b, c, ans = 0;
    cin >> a >> b >> c;
    for(int i = 0; i < b; i++)
    {
        if(int64_t(pow(i,a))% b == c)
        {
            cout << i << ' ';
            ans = 1;
        }
    }
    if(ans != 1) cout << -1;
}