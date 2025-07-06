#include <bits/stdc++.h>
using namespace std;

int deletionCost(const string &pattern, const string &n) {
    int cnt = 0;
    int pos = -1;

    for (int i = (int)n.size() - 1; i >= 0; --i) {
        if (n[i] == pattern[1]) {
            pos = i;
            break;
        }
        cnt++;
    }
    if (pos == -1) return INT_MAX;
    for (int i = pos - 1; i >= 0; --i) {
        if (n[i] == pattern[0]) {
            return cnt;
        }
        cnt++;
    }
    return INT_MAX;
}

void solve() {
    string n;
    cin >> n;
    int c1 = deletionCost("00", n);
    int c2 = deletionCost("25", n);
    int c3 = deletionCost("50", n);
    int c4 = deletionCost("75", n);
    int ans = min({c1, c2, c3, c4});

    if (ans == INT_MAX) 
        cout << -1;
    else 
        cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
    return 0;
}
