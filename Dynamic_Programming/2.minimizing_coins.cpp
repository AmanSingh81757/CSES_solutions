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


    int n, k;
    cin>>n>>k;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        coins.emplace_back(x);
    }

    vector<long long> dp(k+1, -1);
    dp[0] = 0;
    for(int i=1;i<=k;i++){
        dp[i] = 0;
        long long minn = INT_MAX;
        for(auto it: coins){
            if(i-it>=0){
                minn = min(minn, dp[i-it] + 1);
            }
        }
        dp[i]+=minn;
    }
    if(dp[k] == INT_MAX) cout<<-1;
    else
    cout<<dp[k]<<endl;
}
