#include<bits/stdc++.h>
using namespace std;
#define DEBUG

const int MAXN=1e6+5;

vector<int> adj[MAXN];
int n,m,p,q;
bool visited[MAXN];
int found;
queue<int> to_go;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void bfs(int x,int y){
    to_go.push(x);
    while(!to_go.empty()&&found==0){
        auto now=to_go.front();
        to_go.pop();
        visited[now]=true;
        auto go=adj[now];
        for(auto ele:go){
            if(!visited[ele]){
                visited[ele]=true;
                to_go.push(ele);
            }
            if(visited[y]&&y==q){
                found=1;
                break;
            }
            else if(visited[y]&&y==p){
                found=2;
                break;
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=1;i<=m;++i){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
    }
    cin>>p>>q;
    bfs(p,q);
    if(found==0){
        for(int i=1;i<=n;++i){
            visited[i]=false;
        }
        bfs(q,p);
    }
    if(found==0){
        cout<<"unknown"<<endl;
    }
    else if(found==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}