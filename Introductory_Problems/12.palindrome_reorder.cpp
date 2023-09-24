#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long int ull;

#define endl                                   "\n"
#define yes                                    "YES\n"
#define no                                     "NO\n"
#define vi                                     vector<int>
#define all(x)                                 x.begin(),x.end()

using namespace std;

int M=1e9+7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s; cin>>s;
    int arr[26]={0};
    for(auto i: s){
        arr[i-'A']++;
    }
    int codd=0;
    for(int i=0;i<26;i++){
        if(arr[i]&1) codd++;
    }
    if(codd>1) cout<<"NO SOLUTION"<<endl;
    else {
        string ans="",ans2="",extra="";
        for(int i=0;i<26;i++){
            if(arr[i]&1){
                extra=char(65+i);
            }
            for(int j=0;j<(arr[i]/2);j++){
                ans+=char(65+i);
            }
        }
        ans2=ans+extra;
        reverse(ans.begin(),ans.end());
        ans2=ans2+ans;
        cout<<ans2<<endl;
    }
}