#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    int ab=0,ba=0;
    if(s[0]==s[n-1])cout<<s;
    else {
        s[0]=s[n-1];
        cout<<s;
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