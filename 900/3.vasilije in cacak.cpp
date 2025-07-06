#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

ll calcSum(ll n)
{
    return (n * (n + 1)) / 2;
}
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    ll mini = calcSum(k);
    ll maxi = calcSum(n) - calcSum(n - k);
    if (x >= mini && x <= maxi)
        cout << "YES";
    else
        cout << "NO";
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