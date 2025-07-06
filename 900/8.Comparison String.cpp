#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    int maxi = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            maxi = max(cnt, maxi);
            cnt = 1;
        }
    }
    maxi = max(cnt, maxi);
    cout << maxi + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return 0;
}