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
    ll i = n - 2;
    ll cnt = 0;
    for (; i >= 0; i--)
    {
        while (a[i] >= a[i + 1])
        {
            cnt++;
            a[i] /= 2;
            if (a[i] == 0)
            {
                break;
            }
        }
        if (a[i] == 0 && a[i + 1] == 0)
        {
            cnt = -1;
            break;
        }
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