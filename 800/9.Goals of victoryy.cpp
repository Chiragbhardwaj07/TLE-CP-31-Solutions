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
       int a[n];
       a[0]=0;
       for(int i=1;i<n;i++){
        cin>>a[i];
       }
       cout<<-accumulate(a,a+n,0)<<endl;
    }

    return 0;
}