#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n, e = 0, m = 0, l = 0;
    cin >> n;
    string a;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n--)
    {
        getline(cin, a);
        if(a == "Emperor Penguin") e += 1;
        if(a == "Little Penguin") l += 1;
        if(a == "Macaroni Penguin") m += 1;
    }
    if(e > m && e > l) cout << "Emperor Penguin";
    if(m > e && m > l) cout << "Macaroni Penguin";
    if(l > m && l > e) cout << "Little Penguin";
}