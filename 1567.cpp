#include <iostream>
#include <cstring>
using namespace std;

int price(char a)
{
    char one[11] = {'a','d','g','j','m','p', 's', 'v', 'y', ' ', '.'};
    char two[10] = {'b','e','h','k','n','q', 't', 'w', 'z', ','};
    char three[9] = {'c','f','i','l','o','r', 'u', 'x', '!'};
    for(int i = 0; i < 11; i++) if(one[i] == a) return 1;
    for(int i = 0; i < 10; i++) if(two[i] == a) return 2;
    for(int i = 0; i < 9; i++) if(three[i] == a) return 3;
}

int main()
{
    int price1 = 0;
    string a;
    getline(cin,a);
    
    for(int i = 0; i < size(a); i++)
    {
        price1 += price(a[i]);
    }
    cout << price1;
}