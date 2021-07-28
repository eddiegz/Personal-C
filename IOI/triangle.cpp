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
#define dtest(x,p) cout<<x<<"debug"<<" "<<p<<endl;
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
const int MAXN=101;

int ori[MAXN][MAXN];
int tri[MAXN][MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,ans=0;
    cin>>n;
    rep(i,1,n){
        rep(j,1,i){
            cin>>ori[i][j];
        }
    }
    tri[1][1]=ori[1][1];
    rep(i,1,n){
        rep(j,1,i){
            tri[i+1][j]=max(tri[i+1][j],ori[i][j]+ori[i+1][j]);
            tri[i+1][j+1]=max(tri[i+1][j+1],ori[i][j]+ori[i+1][j+1]);
        }
        rep(j,1,i+1){
            ori[i+1][j]=tri[i+1][j];
            #ifdef DEBUG
            rep(k,1,i){
                cout<<ori[i][k]<<" ";
            }
            cout<<endl;
            #endif
        }
    }
    #ifdef DEBUG
    rep(i,1,n){
        rep(j,1,i){
            cout<<tri[i][j]<<" ";
        }
        cout<<endl;
    }
    #endif
    rep(i,1,n){
        ans=max(ans,tri[n][i]);
    }
    cout<<ans<<endl;
}