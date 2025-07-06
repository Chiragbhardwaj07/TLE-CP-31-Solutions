#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n;
    cin >> n;
    vi a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vi diff;
    for (int i = 1; i <= n; i++)
    {

        if (i != a[i - 1])
            diff.push_back(abs(i - a[i - 1]));
    }
    int maxi = diff[0];
    for (int i = 1; i < diff.size(); i++)
    {

        maxi = gcd(maxi, diff[i]);
    }
    cout << maxi;
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