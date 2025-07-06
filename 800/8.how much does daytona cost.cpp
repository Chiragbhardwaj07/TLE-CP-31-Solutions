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
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++)cin>>a[i];     
       int flag=1;
       for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<"YES"<<endl;
            flag=0;
            break;
        }

       }
       if(flag)cout<<"NO"<<endl;
    }

    return 0;
}