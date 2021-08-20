#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ff first
#define ss second
//#define DEBUG

const int MAXN=1e3+5;

char grid[MAXN][MAXN];
bool visited[MAXN][MAXN];
int peri,area;
int n;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
    #endif
    solve();
}

void floodfill(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(grid[i][j]=='#'&&!visited[i][j]){
                queue<pii> to_go;
                to_go.push({i,j});
                int ca=0,cp=0;
                while(!to_go.empty()){
                    auto current=to_go.front();
                    to_go.pop();
                    int x=current.ff,y=current.ss;
                    visited[x][y]=true;
                    ca++;
                    int done=0;
                    if(grid[x-1][y]=='#'){
                        if(!visited[x-1][y]){
                            visited[x-1][y]=true;
                            to_go.push({x-1,y});
                        }
                        done++;
                    }
                    if(grid[x+1][y]=='#'){
                        if(!visited[x+1][y]){
                            visited[x+1][y]=true;
                            to_go.push({x+1,y});
                        }
                        done++;
                    }
                    if(grid[x][y+1]=='#'){
                        if(!visited[x][y+1]){
                            visited[x][y+1]=true;
                            to_go.push({x,y+1});
                        }
                        done++;
                    }
                    if(grid[x][y-1]=='#'){
                        if(!visited[x][y-1]){
                            visited[x][y-1]=true;
                            to_go.push({x,y-1});
                        }
                        done++;
                    }
                    cp+=(4-done);
                }
                if(area==ca){
                    if(cp<peri){
                        area=ca;
                        peri=cp;
                    }
                }
                else{
                    if(area<ca){
                        area=ca;
                        peri=cp;
                    }
                }
            }
        }
    }
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>grid[i][j];
        }
    }
    floodfill();
    cout<<area<<" "<<peri<<endl;
}