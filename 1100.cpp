#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>

using namespace std;

int n;
pair <int, int> res[150000];

int main()
{
    cin >> n;
    int o = 0, k = 0;
    for(int i = 0; i < n; i++) cin >> res[i].first >> res[i].second;

    for(int i = 0; i < 150000 * n; i++)
    {
        if(res[o].second < res[o + 1].second)
        {
            swap(res[o], res[o + 1]);
            o = 0;
        }
        else
        {
            o++;
        }
    }
    cout << '\n';
    for(int i = 0; i < n; i++) cout << res[i].first << ' ' << res[i].second << '\n';
}