int main()
{
int a[10], x, n;
    double gpa = 0, ans = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        gpa+=a[i];
    }
    ans = gpa / n;
    for(int i = 0; i < n; i++){
        if(a[i] == 3){
            cout << "None";
            return 0;
        }
    }
    if(ans < 4.5)
    {
        cout << "Common";
        return 0;
    }
    if((ans >= 4.5) && (ans != 5.0))
    {
        cout << "High";
        return 0;
    }
    if(ans == 5)
    {
        cout << "Named";
        return 0;
    }
}