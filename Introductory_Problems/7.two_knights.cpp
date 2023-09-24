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

    ll n; cin>>n;
    for(ll i=1;i<=n;i++){
        ll z = i*i;
        ll ans= (z * (z-1))/2;
        cout<<ans - (4 * (i-1) * (i-2)) <<endl;
    }
}