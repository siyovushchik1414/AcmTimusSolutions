#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x, ans = 0;
    cin >> x;
    for(int i = 0; i <= x; i++) ans += i;
    if(ans % 2 == 0) cout << "black";
    else cout << "grimy";
}