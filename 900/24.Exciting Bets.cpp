#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    ll a,b;
    cin>>a>>b;
    if(a==b) cout<<0<<" "<<0;
    else{
        ll d= abs(a-b);
        long double n = (long double)a/(long double)d;
        ll q =round(n);
        ll num = a-(d*q);
        cout<<d<<" "<<abs(num);

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }

    return 0;
}