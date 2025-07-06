#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int mini =LLONG_MAX;
        for(int i=0;i<n;i++){
            if(abs(a[i])<abs(mini))mini=abs(a[i]);
        }
        cout<<(mini)<<endl;
    

    return 0;
}