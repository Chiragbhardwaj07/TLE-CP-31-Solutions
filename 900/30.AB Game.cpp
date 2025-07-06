#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    string s; 
    cin>>s;
    int c1=0,c0=0;
    for(auto& c:s){
        if(c=='0')c0++;
        else c1++;
    }
    int n=min(c0,c1)%2;
    if(n==1)cout<<"DA";
    else cout<<"NET";
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