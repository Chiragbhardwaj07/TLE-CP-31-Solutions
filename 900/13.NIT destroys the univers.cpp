#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && (i == 0 || a[i - 1] == 0))
            ans++;
    }
    if (ans > 2)
        cout << 2;
    else
        cout << ans;
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