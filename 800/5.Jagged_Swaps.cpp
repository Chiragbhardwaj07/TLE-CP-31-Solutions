#include <bits/stdc++.h>
using namespace std;

bool canSort(vector<int>& a) {
    int n = a.size();
    while (true) {
        bool changed = false;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                changed = true;
            }
        }
        if (!changed) break;
    }
    return is_sorted(a.begin(), a.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        cout << (canSort(a) ? "YES" : "NO") << '\n';
    }
}
