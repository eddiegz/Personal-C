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
using vc = vector<char>;
using vvc = vector<vc>;
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
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)

void inoutio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    vl desire,size;
    rep(i,1,n){
        ll a;
        cin>>a;
        desire.pb(a);
    }
    rep(i,1,m){
        ll b;
        cin>>b;
        size.pb(b);
    }
    sort(all(desire),greater<int>());sort(all(size),greater<int>());
    ll ans=0,s=0,d=0;
    while(d<n&&s<m){
        if(abs(desire[d]-size[s])<=k){
            d++;s++;
            ans++;
        }
        else{
            if(desire[d]>size[s]){
                d++;
            }
            else{
                s++;
            }
        }
    }
    cout<<ans<<endl;
}