#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = n;
    char a,b;
    int x,y;
    int ans[n], i = 0;
    while(n --)
    {
        cin >> a >> b;
        x = b - '1';
        y = a - 'a';
        if(x > 1 && y > 1 && x < 6 && y < 6)ans[i] = 8;
        if((x > 1 && x < 6 && y == 1) || (y > 1 && y < 6 && x == 1) || (x ==6 && y > 1 && y < 6) || (y == 6 && x > 1 && x < 6)) ans[i] = 6;
        if((x == 0 && y > 1 && y < 6) || (x == 7 && y > 1 && y < 6) || (y == 0 && x > 1 && x < 6) || (y == 7 && x > 1 && x < 6) || (x == 1 && y == 1) || (x == 6 && y ==6) || (x==6 && y==1) || (x == 1 && y == 6)) ans[i] = 4;
        if((x == 0 && y == 1) || (x == 1 && y == 0) || (x == 6 && y == 0) ||(x == 0 && y == 6) ||(x == 6 && y == 7) ||(x == 7 && y == 6) ||(x == 1 && y == 7) ||(x == 7 && y ==1 )) ans[i] = 3;
        if((x==0 && y==0) || (x==7 && y==0) || (x==7 && y==7) || (x==0 && y==7)) ans[i] = 2;
        i++;
    }

    for(int e = 0; e < l; e++)
    {
        cout << ans[e] << endl;
    }
}

