#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;

void solve()
{
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pii> k, q;

    k = {
        {xk + a, yk + b},
        {xk + a, yk - b},
        {xk - a, yk + b},
        {xk - a, yk - b},
        {xk + b, yk + a},
        {xk + b, yk - a},
        {xk - b, yk + a},
        {xk - b, yk - a},
    };

    q = {
        {xq + a, yq + b},
        {xq + a, yq - b},
        {xq - a, yq + b},
        {xq - a, yq - b},
        {xq + b, yq + a},
        {xq + b, yq - a},
        {xq - b, yq + a},
        {xq - b, yq - a},
    };

    int cnt = 0;
    for (auto &pos : k)
    {
        if (q.count(pos))
            cnt++;
    }
    cout << cnt;
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
