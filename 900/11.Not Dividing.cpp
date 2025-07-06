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
    {
        cin >> a[i];
        if (a[i] == 1)
            a[i]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] % a[i] == 0)
            a[i + 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
        cout << '\n';
    }

    return 0;
}