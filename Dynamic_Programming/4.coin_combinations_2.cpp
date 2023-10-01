#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n, k; cin>>n>>k;
    vector<long long> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<vector<long long>> dp(n+1, vector<long long>(k+1, 0));
    dp[0][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){
            dp[i][j] += dp[i-1][j];
            if(j - coins[i-1]>=0){
                dp[i][j] += dp[i][j-coins[i-1]];
                if(dp[i][j]>=mod) dp[i][j]-=mod;
            }
        }
    }
    cout<<dp[n][k]<<endl;

}
