#include <bits/stdc++.h>
using namespace std;

int point(int x,int y){
    int a[10][10]= {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
};
return a[x][y];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
       char arr[10][10];
       for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>arr[i][j];
        }
       }
       int ans=0;
       for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i][j]=='X')ans+=point(i,j);
        }
       }
       cout<<ans<<endl;
    }

    return 0;
}