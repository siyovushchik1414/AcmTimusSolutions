#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, counter = 0, o = 1, p = 0;
    cin >> n;
    string x;
    vector<string> a;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int k = i+1; k < n; k++)
        {
            if(a.at(i) == a.at(k))
            {
                a.erase(a.begin() + k);
                n--;
                k--;
                counter = 1;
            }
        }
        if(counter == 1) cout << a.at(i) << '\n';
        counter = 0;
    }
}