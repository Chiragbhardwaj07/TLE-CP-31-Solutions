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
       int sum = accumulate(a.begin(),a.end(),0);
       if(sum%2)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }

    return 0;
}