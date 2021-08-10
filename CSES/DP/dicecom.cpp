#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll mod=1e9+7;
    ll n;
    cin>>n;
    vi dp(n+1,0);
    dp[0]=1;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=6 && i-j>=0;++j){
            (dp[i]+=dp[i-j])%=mod;
        }
    }
    cout<<dp[n];
    return 0;
}