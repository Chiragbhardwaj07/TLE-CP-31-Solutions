#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    long long n;
    cin >> n;
    int c2 = 0, c3 = 0;

    while (n % 2 == 0) {
        n /= 2;
        c2++;
    }

    while (n % 3 == 0) {
        n /= 3;
        c3++;
    }

    if (n != 1 || c2 > c3) {
        cout << -1;
    } else {
        cout << (c3 - c2) + c3 ;
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