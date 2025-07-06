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

    if (n == 1)
    {
        cout << 0;
        return;
    }

    int global_max = *max_element(a.begin(), a.end());
    int case1 = global_max - a[0];
    int global_min = *min_element(a.begin(), a.end());
    int case2 = a[n - 1] - global_min;
    int case3 = INT_MIN;
    for (int i = 0; i + 1 < n; i++)
    {
        case3 = max(case3, a[i] - a[i + 1]);
    }
    int case0 = a[n - 1] - a[0];

    int ans = max({case0, case1, case2, case3});
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