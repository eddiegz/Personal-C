#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
using vs = vector<str>;
using vvi = vector<vi>;
#define pb push_back
#define pob pop_back
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<string,int>
#define mci map<char,int>
#define mdd map<double,double>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

const int MOD=1e9+7;
const int inf=1e9;

int dp[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    vi coins;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        coins.pb(a);
    }
    for(int i=0;i<=x;++i){
        dp[i]=inf;
    }
    dp[0]=0;
    for(int i=1;i<=n;++i){
        for(int weight=0;weight<=x;++weight){
            if(weight-coins[i-1]>=0){
                dp[weight]=min(dp[weight],dp[weight-coins[i-1]]+1);
            }
        }
    }
    cout<<(dp[x]==inf ? -1:dp[x])<<endl;
}

