#include <iostream>
#include <vector>
using namespace std;

long long sear(int x)
{
    long long l = 0, two = 2, ans = 2, one = 0;
    while(l < x-1)
    {
        ans = one + two;
        one = two;
        two = ans;
        l++;
    }
    return ans;
}

int main()
{
    int a;
    cin >> a;
    cout << sear(a);
}