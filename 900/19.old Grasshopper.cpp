#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve()
{
    ll x, n;
    cin >> x >> n;
    ll ans=0;
    int num= n%4;
    if(num==0)ans=0;
    else if(num==1)ans=-n;
    else if(num==2)ans=1;
    else  ans = n+1;

    if(x&1)cout<<x-ans;
    else cout<<ans+x;
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