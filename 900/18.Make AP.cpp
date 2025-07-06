#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll a1 = 2 * b - c;
    ll b1;
    if ((a + c) % 2 == 0)
        b1 = (a + c) / 2;
    else
        b1 = -1;
    ll c1 = 2 * b - a;
    if (a1 % a == 0 && a1 > 0)
    {
        cout << "YES";
    }
    else if (b1 % b == 0 && b1 > 0)
    {
        cout << "YES";
    }
    else if (c1 % c == 0 && c1 > 0)
    {
        cout << "YES";
    }
    else if (a1 == a && b1 == b && c1 == c)
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