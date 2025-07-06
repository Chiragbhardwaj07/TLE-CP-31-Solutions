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
        string s;
        cin >> n >> s;

        int i = 0;
        int cnt = 0;
        while (i < n &&(s[i] - '0') != (s[s.size() - i - 1] - '0') )
        {
            cnt++;
            i++;
        }
        int ans = s.size() - 2*cnt;
        if(ans<0)cout<<0<<endl;
        else
        cout << ans << endl;
    }

    return 0;
}
