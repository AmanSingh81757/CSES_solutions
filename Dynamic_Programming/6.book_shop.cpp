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


    int n, x; cin>>n>>x;
    vector<int> prices(n), pages(n);
    for(auto &it: prices){
        cin>>it;
    }
    for(auto &it: pages){
        cin>>it;
    }
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            if(j - prices[i-1]>=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-prices[i-1]] + pages[i-1]);
            }
        }
    }
    cout<<dp[n][x]<<endl;
}
