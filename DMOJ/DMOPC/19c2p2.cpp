#include <bits/stdc++.h>
using namespace std;

const int MAXN=505;
const int MOD=1e9+7;
const int INF=1e9;

int grid[MAXN][MAXN];
int dp[MAXN][MAXN];
int n,m;

void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<=n;++i){
        for(int j=0;j<=m;++j){
            dp[i][j]=INF;
        }
    }
    dp[0][1]=0;dp[1][0]=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            dp[i][j]=min(dp[i-1][j]+grid[i][j],dp[i][j-1]+grid[i][j]);
        }
    }
    cout<<dp[n][m]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}
