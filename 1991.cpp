#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector <int> a;
    for(int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }


    int booms = 0, heads = 0;
    for(int i = 0; i < n; i++)
    {
        if(a.at(i) > m) booms += a.at(i) - m;
        if(a.at(i) < m) heads += m - a.at(i);
    }
    cout << booms << ' ' << heads;
}