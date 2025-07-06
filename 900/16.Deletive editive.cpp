#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> m;
    for (auto &c : t)
        m[c]++;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (m[s[i]] > 0)
        {
            m[s[i]]--;
        }
        else
        {
            s[i] = '.';
        }
    }
    string ans = "";
    for (auto &c : s)
    {
        if (c != '.')
            ans += c;
    }
    if (t == ans)
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