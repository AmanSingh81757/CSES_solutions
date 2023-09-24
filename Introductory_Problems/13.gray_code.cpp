#include <bits/stdc++.h>

using namespace std;


vector<string> gray_code(int n){
    vector<string> ans;
    if(n==1){
        ans.emplace_back("0");
        ans.emplace_back("1");
        return ans;
    }

    vector<string> temp = gray_code(n-1);
    for(auto it: temp){
        ans.emplace_back("0"+it);
    }
    for(int i = temp.size()-1; i>=0;i--){
        ans.emplace_back("1"+temp[i]);
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    vector<string> ans = gray_code(n);
    for(auto it: ans) cout<<it<<endl;
    cout<<endl;

    return 0;
}