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
       if(n/100000>0){
        cout<<n/100000+45<<endl;
       }
       else if(n/10000>0){
        cout<<n/10000+36<<endl;
       }
       else if(n/1000>0){
        cout<<n/1000+27<<endl;
       }
       else if(n/100>0){
        cout<<n/100+18<<endl;
       }
       else if(n/10>0){
        cout<<n/10+9<<endl;
       }
       else{
        cout<<n<<endl;
       }
    }

    return 0;
}