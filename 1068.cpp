#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    long long ans = 0;
    cin >> x;
    if(x == 1)
    {
        cout << x;
        return 0;
    }
    if(x > 1) for(int i = 1; i <= x; i++) ans += i;
    else if(x < 1)
    {
        for(int i = 1; i >= x; i--) ans += i;
    }
    cout << ans;
}

// -3 -2 -1 0 1