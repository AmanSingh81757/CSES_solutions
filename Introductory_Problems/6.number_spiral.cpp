#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

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
        ull x,y; cin>>x>>y;
        ull z=max(x,y);
        if(z&1){
            x=z-x;
            z=(z-1)*(z-1);
            cout<<(z+x+y)<<endl;
        }
        else{
            y=z-y;
            z=(z-1)*(z-1);
            cout<<(z+x+y)<<endl;
        }
    }
}