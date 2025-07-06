#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int maxi = 0;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= k)
            cnt++;
        else
        {
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    cout << n - maxi;
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