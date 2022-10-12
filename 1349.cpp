#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n, a,b,c;
    cin >> n;
    for(unsigned long long i = 1; i <= 100; i++)
    {
        for(unsigned long long j = i+1; j <= 100; j++)
        {
            for(unsigned long long k = j; k <= 100; k++)
            {
                if(pow(i,n) + pow(j,n) == pow(k,n) && pow(j,n) != pow(k,n) && pow(i,n) != pow(k,n))
                {
                    cout << i << ' ' << j << ' ' << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1;
}