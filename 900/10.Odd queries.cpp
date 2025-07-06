#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vll a(n, 0);
    ll sum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        m[i] = sum;
    }

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll d = sum;
        d -= m[r - 1];
        d -= m[l - 2];
        d += (k * (r - l + 1));
        if (d & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
        // cout << '\n';
    }

    return 0;
}