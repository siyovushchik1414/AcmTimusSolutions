#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
   while(a <= c)
   {
    a+=b;
    if(a > c) a = c;
    c-=d;
   }
   cout << a;
}