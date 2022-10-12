#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <inttypes.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(2*a+39 > 2*b+40) cout << 2*a+39;
    else cout << 2*b+40;
}