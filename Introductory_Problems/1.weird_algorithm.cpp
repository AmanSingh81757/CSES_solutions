// ************************************************* CODE BY AMAN ************************************************* //

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
    while(n>1){
        cout<<n<<" ";
        if(n&1) n=(3*n) + 1;
        else n=n/2;
    }
    cout<<1<<endl;
}