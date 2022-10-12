#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n, m, o = 1, x, counter = 1;
    cin >> n >> m;
    int ans[n] = {};
    double u = m;
    vector<int> arr;
    while(m--)
    {
        cin >> x;
        arr.push_back(x);
    }
    int s = 0;
    while(!arr.empty())
    {
        s = arr.size();
        o = 1;
        for(int i = 1; i < s; i++)
    {
        if(arr.at(0) == arr.at(o))
        {
            counter++;
            arr.erase(arr.begin() + o);
        }
        else o++;
    }
    ans[(arr.at(0) - 1)] = counter;
    arr.erase(arr.begin());
    counter = 1;
    }

    for(double i : ans) cout << fixed << setprecision(2) << i / u * 100 << '%' << endl;
}