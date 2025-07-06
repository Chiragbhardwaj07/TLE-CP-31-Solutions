#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-->0){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int fgs=arr[0]-0;
	    int dgs=INT_MIN;
	    for(int i=1;i<n;i++){
	        int d=arr[i]-arr[i-1];
	        dgs=max(dgs,d);
	    }
	    int lgs=(x-arr[n-1])*2;
	    cout<<max(fgs,max(dgs,lgs))<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i>n;i++){
            cin>>a[i];
        }
        int first_gap=a[0]-0;
        int sec_gap=INT_MIN;
        for(int i=0;i<n-1;i++){
            sec_gap=max(sec_gap,a[i+1]-a[i]);
        }
        int third_gap=(x-a[n-1])*2;
        cout<<max(third_gap,max(first_gap,sec_gap))<<endl;
	}
}