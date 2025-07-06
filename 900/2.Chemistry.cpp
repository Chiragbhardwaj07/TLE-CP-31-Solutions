#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (auto &c : s)
    {
        m[c]++;
    }
    int cnt = 0;
    for (auto &it : m)
    {
        if (it.second & 1)
            cnt++;
    }
    if (cnt - k <= 1)
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