#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MAXN=6e3+5;
const int INF=2e9;

int dp[MAXN];
vector<int> club;
int x;
int n;

void solve();
void ans();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void solve(){
    cin>>x;
    cin>>n;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        club.push_back(a);
    }
    ans();
}

void ans(){
    for(int i=1;i<=x;++i){
        dp[i]=INF;
    }
    for(int i=1;i<=x;++i){
        for(int strike:club){
            if(i-strike>=0){
                dp[i]=min(dp[i],dp[i-strike]+1);
            }
        }
    }
    if(dp[x]!=INF){
        cout<<"Roberta wins in "<<dp[x]<<" strokes."<<endl;
    }
    else{
        cout<<"Roberta acknowledges defeat."<<endl;
    }
}