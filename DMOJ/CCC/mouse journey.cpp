#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e3+5;
const int MOD=1e9+7;

bool grid[MAXN][MAXN];
int dp[MAXN][MAXN];
int r,c,k;

void solve(){
    cin>>r>>c>>k;
    for(int i=1;i<=k;++i){
        int a,b;
        cin>>a>>b;
        grid[a][b]=1;
    }
    dp[0][1]=1;
    for(int i=1;i<=r;++i){
        for(int j=1;j<=c;++j){
            if(grid[i][j]==0){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
                dp[i][j]%=MOD;
            }
        }
    }
    cout<<dp[r][c]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}