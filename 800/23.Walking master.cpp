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
       int a,b,c,d;int cnt=0;
       cin>>a>>b>>c>>d;
       if((c-a)>(d-b)||d<b)cout<<-1<<endl;
       else{
        int y = d-b;
        a+=y;
        b+=y;
        cnt+=y;
        int x=a-c;
        a-=x;
        cnt+=x;
        cout<<cnt<<endl;

       }
    }

    return 0;
}