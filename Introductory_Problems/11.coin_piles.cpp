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

    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        ll x=min(a,b), y=max(a,b);
        if((a+b) % 3 !=0) cout<<no;
        else if(x >= y/2 && y <= 2*x) cout<<yes;
        else cout<<no;
    }
}