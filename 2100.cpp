#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int price = 200;
    string a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        price+=100;
    }
    for(int i = 0; i < n; i++)
    {
         if(a[i].find("+one", 0) != string::npos) price+=100;
    }
    if(price == 1300) price += 100;
    cout << price;
}
