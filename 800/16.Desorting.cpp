#include <bits/stdc++.h>
#define ll long long
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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll mind = LLONG_MAX;
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            ll diff = a[i] - a[i - 1];
            if (diff < 0)
            {
                cout << 0 << endl;
                flag = true;
                break;
            }
            if (diff < mind)
                mind = diff;
        }
        if (flag)
            continue;
        if (mind == LLONG_MAX)
        {
            cout << 0 << endl;
        }
        else if (mind == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            ll k = (mind + 2) / 2;
            cout << k << "\n";
        }
    }

    return 0;
}