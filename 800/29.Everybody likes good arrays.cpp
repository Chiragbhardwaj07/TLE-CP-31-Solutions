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
       int p= a[0]&1;
       int cnt=0;
       for(int i=1;i<n;i++){
        int par = a[i]&1;
        if(par==p)cnt++;
        p=par;
       }
       cout<<cnt<<endl;
    }

    return 0;
}