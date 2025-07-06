#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> prefix2(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefix2[i + 1] = prefix2[i] + (a[i] == 2);
        }

        int total2 = prefix2[n];
        int answer = -1;
        for (int k = 1; k < n; k++) {
            if (prefix2[k] == total2 - prefix2[k]) {
                answer = k;
                break;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}
