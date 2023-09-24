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
    unsigned long long  c=0;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0){
            if(arr[i] < arr[i-1]){
                c = c + arr[i-1] - arr[i];
                arr[i]=arr[i-1];
            }
        }
    }
    cout<<c<<endl;
}