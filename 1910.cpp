#include <iostream>
using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    int a[n], b[n-2] = {};

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n-2; i++)
    {
        for(int j = i; j < i+3; j++) b[i]+=a[j];

    }
    int max = b[0];
    for(int i = 1; i < n-2; i++)
    {
        if(max < b[i]) max = b[i];
    }
    cout << max;

    for(int i = 0; i < n-2; i++)
    {
        if(b[i] == max) cout << ' ' << i + 2;
    } 
}
