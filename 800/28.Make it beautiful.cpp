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
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        if(m.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int l=0,h=n-1;
            while(l<=h){
                if(l==h){
                    cout<<a[l];
                    break;
                }
                cout<<a[h]<<" "<<a[l]<<" ";
                l++;
                h--;
            }
            cout<<endl;
        }
    }

    return 0;
}