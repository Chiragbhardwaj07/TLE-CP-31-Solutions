#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
      int n;
      cin>>n;
      vi a(n,0);
      for(auto& x:a)cin>>x;
      int x=a[0];
      for(int i=1;i<n;i++)x=x&a[i];
      cout<<x;
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