#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
     int n,a,b;
     cin>>n>>a>>b;
     if (a == n && b == n) {
            cout << "Yes\n";
        }     else if(n-a-b>1)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
    }

    return 0;
}