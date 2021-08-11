#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
using ll=long long;

const ll MOD=1e9+7;
const int MAXN=1e6+7;

vector<int> coin;
ll dp[MAXN];
int n,x;

void solve(){
    cin>>n>>x;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        coin.push_back(a);
    }
    dp[0]=1;
    for(auto ele:coin){
        for(int i=1;i<=x;++i){
            if(i>=ele){
                dp[i]+=dp[i-ele];
                dp[i]%=MOD;
            }
        }
    }
    cout<<dp[x]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}