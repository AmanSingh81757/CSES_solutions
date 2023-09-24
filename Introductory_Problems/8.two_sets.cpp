#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long int ull;

#define endl                                   "\n"
#define yes                                    "YES\n"
#define no                                     "NO\n"
#define vi                                     vector<int>
#define all(x)                                 x.begin(),x.end()

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

    ull n; cin>>n;
    if( (n+1) %4==0){
        cout<<yes;
        cout<<n/2<<endl;
        for(int i=1;i<=n;i++){
            if((i+1) % 4==0 || i%4==0){
                cout<<i<<" ";
            }
        }
        cout<<"\n"<<n-(n/2)<<endl;
        for(int i=1;i<=n;i++){
            if((i+1) % 4!=0 && i%4!=0){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    else if(n%4==0){
        cout<<yes;
        cout<<n/2<<endl;
        for(int i=1;i<=n;i++){
            if((i-1)%4==0 || i%4==0) cout<<i<<" ";
        }
        cout<<"\n"<<n/2<<endl;
        for(int i=1;i<=n;i++){
            if((i-1)%4!=0 && i%4!=0) cout<<i<<" ";
        }
    }
    else{
        cout<<no;
    }
}