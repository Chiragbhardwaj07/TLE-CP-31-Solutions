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
        int maxi = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]==0){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
            
        }
         maxi=max(maxi,cnt);
         cout<<maxi<<endl;
    }

    return 0;
}