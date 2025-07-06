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
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {
            int diff = x;
            int d = diff - 1;
            vector<int> v;
            while (diff > 0)
            {
                
                while (d % k == 0 && d > 0)
                    d--;
                if (d <= 0)
                    break;
                v.push_back(d);
                diff -= d;
                d=diff;
            }
            cout << v.size() << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}