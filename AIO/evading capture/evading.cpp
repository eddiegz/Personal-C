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
#define qi queue<int>
#define qpii queue<pii>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cerr<<x<<" debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
//#define DEBUG

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e5+5;
const int INF=INT_MAX;

int q;
bool odd[MAXN],even[MAXN];
vi adj[MAXN];
qi to_go;

inline void bfs(){
    qi nex_go;
    q++;
    while(!to_go.empty()){
        auto current=to_go.front();
        to_go.pop();
        auto list=adj[current];
        for(auto ele:list){
            if(q%2){
                if(!odd[ele]){
                    odd[ele]=true;
                    nex_go.push(ele);
                }
            }
            else{
                if(!even[ele]){
                    even[ele]=true;
                    nex_go.push(ele);
                }
            }
        }
    }
    to_go=nex_go;
}

void solve(){
    int n,e,x,k,ans=0;
    cin>>n>>e>>x>>k;
    rep(i,1,e){
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    to_go.push(x);
    while(q<k){
        if(to_go.empty())break;
        bfs();
    }
    if(k%2){
        rep(i,1,n){
            if(odd[i]){
                ans++;
            }
        }
    }
    else{
        rep(i,1,n){
            if(even[i]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    txtio("evadingin.txt","evadingout.txt");
    #endif
    int t=1;
    while(t--){
        solve();
    }
}