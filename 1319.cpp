#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int a[100][100], x = 1, n, h = 1;
    cin >> n;

    while(x < n * n + 1){
        for(int i = 0; i < n; i++){
                for(int k = n-1; k >= 0; k--){
                        a[i][k] = x;
                        x++;
                    }
                }
    }
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            // cout << a[i][k] << " ";
        }
        // cout << '\n';
    }
    

    for(int i = 0; i < n; i++){
        int k = 0;
        int j = n - 1 - i;
        while(j < n){
            // cout << a[k][j] << " => ";
            a[k][j] = h;
            // cout << a[k][j] << " ";
            k += 1;
            j += 1;
            h++;
        }
    }
    for(int i = 0; i < n; i++){
        int k = i + 1;
        int j = 0;
        while(k < n)
        {
            // cout << a[k][j] << " => ";
            a[k][j] = h;
            // cout << a[k][j] << " ";
            k += 1;
            j += 1;
            h++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cout << a[i][k] << " ";
        }
        cout << '\n';
    }
}
