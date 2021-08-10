#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
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
#define ts to_string
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
#define vpii vector<pii>
#define qpii queue<pii>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cerr<<x<<" debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
#define DEBUG

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1005;
const int INF=INT_MAX;

char grid[MAXN][MAXN];
int n,m,ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    cin>>n>>m;
    rep(i,1,n){
        rep(j,1,m){
            cin>>grid[i][j];
        }
    }
    rep(i,1,n){
        rep(j,1,m){
            if(grid[i][j]=='.'){
                qpii to_go;
                to_go.push(mp(i,j));
                ans++;
                while(!to_go.empty()){
                    auto cc=to_go.front();
                    to_go.pop();
                    grid[cc.ff][cc.ss]='#';
                    if(grid[cc.ff+1][cc.ss]=='.'){
                        to_go.push(mp(cc.ff+1,cc.ss));
                        grid[cc.ff+1][cc.ss]='#';
                    }
                    if(grid[cc.ff-1][cc.ss]=='.'){
                        to_go.push(mp(cc.ff-1,cc.ss));
                        grid[cc.ff-1][cc.ss]='#';
                    }
                    if(grid[cc.ff][cc.ss+1]=='.'){
                        to_go.push(mp(cc.ff,cc.ss+1));
                        grid[cc.ff][cc.ss+1]='#';
                    }
                    if(grid[cc.ff][cc.ss-1]=='.'){
                        to_go.push(mp(cc.ff,cc.ss-1));
                        grid[cc.ff][cc.ss-1]='#';
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}