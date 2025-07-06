#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    ll n;
    cin >> n;
    if (n < 4 || n % 2 == 1)
    {
        cout << -1;
        return;
    }
    ll mini = (n + 5) / 6;
    ll maxi = n / 4;
    cout << mini << " " << maxi;
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