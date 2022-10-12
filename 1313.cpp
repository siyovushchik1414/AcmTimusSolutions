#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a[100][100], x = 0, n;
    cin >> n;
        for(int i = 0; i < n; i++){
                for(int k = 0; k < n; k++){
                    cin >> a[i][k];
                    // a[i][k] = (n * i) + k + 1;
                }
            }
   for(int i = 0; i < n; i++){
    int k = i;
    int j = 0;
    while(j <= i){
        cout <<  to_string(a[k][j]) << ' ';
        k -= 1;
        j += 1;
    }
   }
   for(int i = 0; i < n - 1; i++){
    int k = n - 1;
    int j = i + 1;
    while(j != n){
        cout << to_string(a[k][j]) << ' ';
        k -= 1;
        j += 1;
    }
   }
   return 0;
}