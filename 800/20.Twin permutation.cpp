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
       int n;
       cin>>n;
       vector<int>a(n,0);
       for(int i=0;i<n;i++)cin>>a[i];

       for(int i=0;i<n;i++){
        cout<<n-a[i]+1<<" ";
       }
       cout<<endl;
    }

    return 0;
}   