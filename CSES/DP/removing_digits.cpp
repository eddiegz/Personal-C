#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e6+5;
const int INF=2e9;

int dp[MAXN];
int n;

void solve(){
    cin>>n;
    dp[n]=0;
    for(int i=0;i<n;++i){
        dp[i]=INF;
    }
    for(int i=n;i>=0;--i){
        for(auto ele:to_string(i)){
            int current=int(ele)-48;
            if(i-current>=0){
                dp[i-current]=min(dp[i-current],dp[i]+1);
            }
        }
    }
    cout<<dp[0]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}