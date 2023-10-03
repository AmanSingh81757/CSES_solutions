#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin>>n;

    vector<string> grid(n);
    for(auto &it: grid) cin>>it;
    vector<vector<int>> ans(n, vector<int>(n, 0));
    if(grid[0][0]!='*')
        ans[0][0] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*'){
                ans[i][j]=0;
                continue;
            }
            if(i==0 and j!=0){
                ans[i][j] = ans[i][j-1];
            }
            else if(j==0 and i!=0){
                ans[i][j] = ans[i-1][j];
            }
            else if(i!=0 and j!=0){
                (ans[i][j] += ans[i-1][j] + ans[i][j-1])%=mod;
            }
        }
    }
    cout<<ans[n-1][n-1];

}
