#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    int dif = b - a;
    if(a % 2 == 0 && b % 2 == 0) ans--;
    for(int i = 0; i < dif + 1; i+=2) ans+=1;
    cout << ans;
}