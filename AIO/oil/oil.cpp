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
#define arprint(x) for(auto ele:x){cout<<x<<" ";}cout<<endl;

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=2*(1e3)+1;

bool done[MAXN][MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    txtio("oilin.txt","oilout.txt");
    int r,c,k;
    cin>>r>>c>>k;
    int ans=0;
    char map[r+1][c+1];
    bool found=false;
    queue<pii> to_go;
    pii location;
    rep(i,1,r){
        rep(j,1,c){
            cin>>map[i][j];
            if (!found){
                if(map[i][j]=='$'){to_go.push(mp(i,j));found=true;}
            }
        }
    }
    int index=1;
    rep(i,1,k+1){
        int cc=0;
        while(index--){
            pii current=to_go.front();
            to_go.pop();
            if(map[current.ff][current.ss]=='.'){map[current.ff][current.ss]='*';done[current.ff][current.ss]=true;}
            if(current.ff>1&&map[current.ff-1][current.ss]=='.'&&done[current.ff-1][current.ss]==false){to_go.push(mp(current.ff-1,current.ss));cc++;done[current.ff-1][current.ss]=true;}
            if(current.ss>1&&map[current.ff][current.ss-1]=='.'&&done[current.ff][current.ss-1]==false){to_go.push(mp(current.ff,current.ss-1));cc++;done[current.ff][current.ss-1]=true;}
            if(current.ff<r&&map[current.ff+1][current.ss]=='.'&&done[current.ff+1][current.ss]==false){to_go.push(mp(current.ff+1,current.ss));cc++;done[current.ff+1][current.ss]=true;}
            if(current.ss<c&&map[current.ff][current.ss+1]=='.'&&done[current.ff][current.ss+1]==false){to_go.push(mp(current.ff,current.ss+1));cc++;done[current.ff][current.ss+1]=true;}
        }
        index=cc;
    }
    rep(i,1,r){
        rep(j,1,c){
            cout<<map[i][j];
        }
        cout<<endl;
    }
}