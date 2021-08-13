#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
const int INF=__INT_MAX__;
const int MAXN=1e6+5;
 
vector<ll> coin;
ll dp[MAXN];
int n,x;
 
void solve(){
    cin>>n>>x;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        coin.push_back(a);
    }
    dp[0]=0;
    for(int i=1;i<=x;++i){
        dp[i]=INF;
    }
    for(auto ele:coin){
        for(int i=0;i<=x;++i){
            if(i-ele>=0)
                dp[i]=min(dp[i],dp[i-ele]+1);
        }
    }
    if(dp[x]==INF){
        cout<<-1<<endl;
    }
    else{
        cout<<dp[x]<<endl;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}