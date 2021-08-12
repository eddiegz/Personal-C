#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl "\n"

const int MAXN=5e5+5;

ll grid[MAXN][4];
ll dp[MAXN];
ll interval[MAXN];
ll l;

void solve(){
    cin>>l;
    for(int i=1;i<=l;++i){
        for(int j=1;j<=3;++j){
            cin>>grid[i][j];
        }
    }
    for(int i=2;i<=l;++i){
        for(int j=1;j<=2;++j){
            interval[i-1]=max(interval[i-1],grid[i-1][j]+grid[i][j]+grid[i-1][j+1]+grid[i][j+1]);
            interval[i]=max(interval[i],grid[i][j]+grid[i+1][j]+grid[i][j+1]+grid[i+1][j+1]);
        }
    }
    dp[l-1]=max(ll(0),interval[l-1]);
    for(int i=l-2;i>=1;--i){
        dp[i]=max(dp[i+1],dp[i+2]+interval[i]);
    }
    cout<<max(ll(0),dp[1])<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}