#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
       ll n,k;
       cin>>n>>k;
       if(k==1)cout<<"YES"<<endl;
       else if(k%2==0&n%2!=0)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }

    return 0;
}