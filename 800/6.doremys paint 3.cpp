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
        int a[n];
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if (m.size() < 2)
            cout << "Yes" << endl;
        else if (m.size() == 2)
        {
            auto it = m.begin();
            int freq1 = it->second;
            it++;
            int freq2 = it->second;
            if (abs(freq1 - freq2) <= 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

        else
            cout << "No" << endl;
    }

    return 0;
}
