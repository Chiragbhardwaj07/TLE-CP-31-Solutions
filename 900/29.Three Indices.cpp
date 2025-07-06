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
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        while (j < n&&a[j] < a[i] )
            j++;
        int k = j + 1;
        while (k < n&&a[k] > a[j] )
            k++;
        if ( j < n && k < n&&a[j] > a[i] && a[k] < a[j] )
        {
            cout << "YES" << endl;
            cout << i + 1 << " " << j + 1 << " " << k + 1;
            return;
        }
    }

    cout << "NO";
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