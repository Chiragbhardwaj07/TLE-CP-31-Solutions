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
       int n,m;
       cin>>n>>m;
       string x;
       string s;
       cin>>x;
       cin>>s;
       int cnt=0;
       int flag=0;
       for (int i = 0; i <=5; ++i){
            if(x.find(s)!=string::npos){
                cout<< cnt<<endl;
                flag=1;
                break;
            }
            else{
                x+=x;
                cnt++;
            }
       }
       if(!flag)cout<<-1<<endl;
    }

    return 0;
}