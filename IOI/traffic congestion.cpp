#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

const int MAXN=1e6+5;
int INF=INT_MAX;

int n;
int val[MAXN];
vector<int> adj[MAXN];
int ans;
int sz[MAXN];

inline void comp(int u,int par=-1){
    sz[u]=val[u];
    for(auto &v:adj[u])if(v!=par){
        comp(v,u);
        sz[u]+=sz[v];
    }
}

inline void dfs(int u,int x=0,int par=-1){
    int mx=x;
    for(auto &v:adj[u]) if(v!=par){
        dfs(v,x+sz[u]-sz[v],u);
        mx=max(mx,sz[v]);
    }
    if(mx<INF){
        INF=mx;
        ans=u;
    }
}

void solve(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>val[i];
    }
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    comp(0);
    dfs(0);
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}
