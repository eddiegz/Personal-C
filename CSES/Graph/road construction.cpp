#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MAXN=1e5+5;

int parent[MAXN];
int vol[MAXN];
int n,m;
int ans,total;

void init(){
    for(int i=1;i<=n;++i){
        parent[i]=i;
        vol[i]=1;
    }
    total=n;
}

int find(int a){
    if(parent[a]!=a){
        parent[a]=find(parent[a]);
    }
    return parent[a];
}

void merge(int a,int b){
    int x=find(a);
    int y=find(b);
    if(x==y){
        return;
    }
    vol[y]+=vol[x];
    parent[x]=y;
    ans=max(ans,vol[y]);
    total--;
}

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void solve(){
    cin>>n>>m;
    init();
    while(m--){
        int a,b;
        cin>>a>>b;
        merge(a,b);
        cout<<total<<" "<<ans<<endl;
    }
}