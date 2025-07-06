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
        cin >> n;
        vector<int> a(n, 0);
        int ncnt = 0, pcnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==-1)ncnt++;
            else pcnt++;
        }
        int ans=0;
        while(ncnt>pcnt){
            ans++;
            ncnt--;
            pcnt++;
        }
        if(ncnt%2==0)cout<<ans<<endl;
        else cout<<ans+1<<endl;
    }

    return 0;
}