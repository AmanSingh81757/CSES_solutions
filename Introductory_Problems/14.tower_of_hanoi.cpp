#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long int ull;

#define endl                                   "\n"
#define yes                                    "YES\n"
#define no                                     "NO\n"
#define vi                                     vector<int>
#define vl                                     vector<long long int>
#define all(x)                                 x.begin(),x.end()

using namespace std;

int M=1e9+7;

int power (int base, int exp){
   int res = 1; int mod=1e9+7;

   while (exp != 0){
    if (exp & 1 == 1){
        res=((res)*(base));
        exp--;
    }
    else{
        base=((base)*(base));
        exp/=2;
    }
   }
   return (res);
}

void towerofhanoi(int discs, int first, int aux, int sec){
    if(discs == 1) {
        cout<<first<<" "<<sec<<endl;
    }
    else{
        towerofhanoi(discs-1,first,sec,aux);
        towerofhanoi(1,first,aux,sec);
        towerofhanoi(discs-1,aux,first,sec);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    cout<<power(2,n)-1<<endl;
    towerofhanoi(n,1,2,3);
}