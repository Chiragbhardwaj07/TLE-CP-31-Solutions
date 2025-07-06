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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int maxi = INT_MIN;
        int mini = LLONG_MAX;
        int maxcnt = 0;
        for (auto x : a)
        {
            if (x < mini)
                mini = x;
            if (x > maxi)
            {
                maxi = x;
                maxcnt = 1;
            }
            else if (x == maxi)
            {
                maxcnt++;
            }
        }
        if (maxi == mini)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> b;
        for (auto x : a)
        {
            if (x != maxi)
                b.push_back(x);
        }
        cout << b.size() << " " << maxcnt << endl;
        for (auto x : b)
        {
            cout << x << " ";
        }
        cout << endl;
        while (maxcnt--)
        {
            cout << maxi << " ";
        }
        cout << endl;
    }

    return 0;
}