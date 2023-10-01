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
    vector<long long> dp(k+1, 0);
    dp[0] = 1;
    for(int i=1;i<=k;i++){
        for(auto &it: coins){
            if(i-it>=0){
                dp[i]+=dp[i-it];
                if(dp[i] >= mod)
                    dp[i]-=mod;
            }
        }
    }
    cout<<dp[k];
}
