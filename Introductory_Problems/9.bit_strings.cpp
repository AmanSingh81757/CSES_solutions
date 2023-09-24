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

    ull n; cin>>n;
    int d=1;
    for(int i=1;i<=n;i++){
        d=d*2;
        d=d%M;
    }
    cout<<d<<endl;
}