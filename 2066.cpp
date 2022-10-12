#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a, b;
    int x[n][1];
    int k = 0;
    while(n != 0)
    {
        cin >> a >> b;
        x[k][0] = a - 'a';
        x[k][1] = int(b);
        k++;
        n--;
    }

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < 2; k++)
        {
            cout << x[i][k];
        }
        cout << '\n';
    }
}
