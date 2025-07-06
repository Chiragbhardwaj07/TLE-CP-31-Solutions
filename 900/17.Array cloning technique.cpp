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
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int maxi = 0;
    for (auto i : freq)
    {
        if (i.second > maxi)
            maxi = i.second;
    }
    int cnt = 0;
    while (maxi < n)
    {
        cnt++;
        if (maxi * 2 <= n)
        {
            cnt += maxi;
            maxi *= 2;
        }
        else
        {
            cnt += (n - maxi);
            maxi = n;
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