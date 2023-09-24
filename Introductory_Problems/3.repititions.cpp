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

    string s; cin>>s;
    int max=1, c=1;
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            c++;
            if(c>max) max=c;
        }
        else c=1;
    }
    cout<<max<<endl;
}