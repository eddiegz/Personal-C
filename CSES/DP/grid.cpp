#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e3+5;
const int MOD=1e9+7;

char grid[MAXN][MAXN];
int dp[MAXN][MAXN];
int n;

void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>grid[i][j];
        }
    }
    dp[0][1]=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(grid[i][j]=='.'){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                dp[i][j]%=MOD;
            }
        }
    }
    cout<<dp[n][n]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}