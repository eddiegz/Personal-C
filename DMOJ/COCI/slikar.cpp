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
using vc = vector<char>;
using vvi = vector<vi>;
using vvc = vector<vc>;
#define pb push_back
#define pob pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define sc set<char>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<str,int>
#define mis map<int,str>
#define mci map<char,int>
#define mdd map<double,double>
#define mll map<ll,ll>
#define pii pair<int,int>
#define pis pair<int,str>
#define psi pair<str,int>
#define pss pair<str,str>
#define pci pair<char,int>
#define pcc pair<char,char>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x) cout<<x<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out")    .c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=52;

int r, c, startX, startY, endX, endY;
char floods[52][52][2500];
int dist[52][52];
vector<pii> floodLocate;

inline void Flood(int r, int c){
    int sizes = r*c;
    list<pair<int,int>> pq[sizes];
    for (int x = 0; x < floodLocate.size(); x++)pq[0].pb(floodLocate[x]);
    for (int x = 0; x < sizes; x++){
        while (!pq[x].empty()){
            int u = pq[x].front().first, v = pq[x].front().second;
            pq[x].pop_front();
            if (floods[u+1][v][x] == '.'){
                for (int y = x; y < sizes; y++)floods[u+1][v][y] = '*';
                pq[x+1].pb(mp(u+1, v));
            }
            if (floods[u-1][v][x] == '.'){
                for (int y = x; y < sizes; y++)floods[u-1][v][y] = '*';
                pq[x+1].pb(mp(u-1, v));
            }
            if (floods[u][v+1][x] == '.'){
                for (int y = x; y < sizes; y++)floods[u][v+1][y] = '*';
                pq[x+1].pb(mp(u, v+1));
            }
            if (floods[u][v-1][x] == '.'){
                for (int y = x; y < sizes; y++)floods[u][v-1][y] = '*';
                pq[x+1].pb(mp(u, v-1));
            }
        }
    }
}

inline void BFS (int sX, int sY){
    list<pair<int,int>> pq;
    pq.pb(mp(sX, sY));
    dist[sX][sY] = 0;
    while (!pq.empty()){
        int u = pq.front().first, v = pq.front().second;
        pq.pop_front();
        if (dist[u][v]+1 < dist[u+1][v] && (floods[u+1][v][dist[u][v]] == '.' || floods[u+1][v][dist[u][v]] == 'D')){
            dist[u+1][v] = dist[u][v] + 1;
            pq.pb(mp(u+1, v));
        }
        if (dist[u][v]+1 < dist[u-1][v] && (floods[u-1][v][dist[u][v]] == '.' || floods[u-1][v][dist[u][v]] == 'D')){
            dist[u-1][v] = dist[u][v] + 1;
            pq.pb(mp(u-1, v));
        }
        if (dist[u][v]+1 < dist[u][v+1] && (floods[u][v+1][dist[u][v]] == '.' || floods[u][v+1][dist[u][v]] == 'D')){
            dist[u][v+1] = dist[u][v] + 1;
            pq.pb(mp(u, v+1));
        }
        if (dist[u][v]+1 < dist[u][v-1] && (floods[u][v-1][dist[u][v]] == '.' || floods[u][v-1][dist[u][v]] == 'D')){
            dist[u][v-1] = dist[u][v] + 1;
            pq.pb(mp(u, v-1));
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    rep(i,0,51){
        rep(j,0,51){
            dist[i][j]=INT_MAX;
            rep(k,0,2499){
                floods[i][j][k]='X';
            }
        }
    }
    cin>>r>>c;
    rep(i,1,r){
        rep(j,1,c){
            cin>>floods[i][j][0];
            switch(floods[i][j][0]){
            case 'S':
                startX = i, startY = j;
                floods[i][j][0] = '.';
                break;
            case 'D':
                endX = i, endY = j;
                break;
            case '*':
                floodLocate.pb(mp(i, j));
                break;
            }
            rep(z,1,r*c)floods[i][j][z] = floods[i][j][0];
        }
    }
    Flood(r, c);
    BFS(startX, startY);
    if (dist[endX][endY] == INT_MAX)printf("KAKTUS\n");
    else printf("%i\n", dist[endX][endY]);
}
