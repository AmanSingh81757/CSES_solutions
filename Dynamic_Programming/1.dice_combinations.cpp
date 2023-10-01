#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int main(){
    int n;
    cin>>n;
    vector<long long> dp(n+1, -1);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = 0;
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i] += dp[i-j];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[n]<<endl;
}