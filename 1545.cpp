#include <iostream>
#include <cmath>
#include <string>

using namespace std;

char getter(string s)
{
    return s[0];
}

int main()
{
string a[1000];

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
            cin >> a[i];
    }

    char c;
    cin >> c;

    for(int i = 0; i < n; i++){
        if(c == getter(a[i])){
            cout << a[i] << "\n";
        }
    }


}