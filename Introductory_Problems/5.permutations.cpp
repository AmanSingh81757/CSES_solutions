#include <bits/stdc++.h>
typedef long long int ll;

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
    if(n==1) cout<<1<<endl;
    else if(n<4) cout<<"NO SOLUTION\n";
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
}