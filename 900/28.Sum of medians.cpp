#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n * k, 0);
    for (auto &i : a)
        cin >> i;
    int middle_pos = (n + 1) / 2;
    ll sum = 0;
    ll step = n - middle_pos + 1;
    int idx = (n * k) - step;
    for (int i = 0; i < k; i++)
    {
        sum += a[idx];
        idx -= step;
    }
    cout << sum;
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