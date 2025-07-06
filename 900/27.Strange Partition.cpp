#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi a(n, 0);
    ll sum = 0;
    ll total=0;
    for (auto &i : a)
    {
        cin >> i;
        sum+=ceil((double)i/(double)x);
        total+=i;
    }
    total=ceil((double)total/(double)x);
    cout<<total<<" "<<sum;
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
