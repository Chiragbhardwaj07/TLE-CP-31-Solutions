#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int totalEmpty = 0, maxSeg = 0, curSeg = 0;
        for(char ch : s) {
            if(ch == '.'){
                totalEmpty++;
                curSeg++;
            } else {
                maxSeg = max(maxSeg, curSeg);
                curSeg = 0;
            }
        }
        maxSeg = max(maxSeg, curSeg);
        
        if(totalEmpty == 0)
            cout << 0 << "\n";
        else if(maxSeg >= 3)
            cout << 2 << "\n";
        else
            cout << totalEmpty << "\n";
    }
}