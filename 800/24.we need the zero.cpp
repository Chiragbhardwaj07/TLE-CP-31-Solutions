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
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x^=a[i];
        }
        int ans=-1;
        if(n%2==0){
            if(x==0)ans=0;
        }
        else{
            ans=x;
        }
        cout<<ans<<endl;
    }

    return 0;
}