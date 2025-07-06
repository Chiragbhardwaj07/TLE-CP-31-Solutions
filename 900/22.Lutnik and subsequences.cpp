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
    int cnt1 = 0, cnt0 = 0;
    for (auto &x : a)
    {
        cin >> x;
        if(x==0)cnt0++;
        else if(x==1)cnt1++;
    }
     ll ans = cnt1 * (1LL << cnt0);
    cout<<ans;
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