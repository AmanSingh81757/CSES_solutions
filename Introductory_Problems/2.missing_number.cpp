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
    int sum=0, result=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        int x; cin>>x; sum+=x;
    }
    cout<<result-sum<<endl;
}