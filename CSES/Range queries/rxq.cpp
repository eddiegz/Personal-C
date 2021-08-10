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
    freopen((s + ".out")    .c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

template<class T> struct Seg {
	const T ID = 1e18; T comb(T a, T b) { return a^b; }
	int n; vector<T> seg;
	void init(int _n) { n = _n; seg.assign(2*n,ID); }
	void pull(int p) { seg[p] = comb(seg[2*p],seg[2*p+1]); }
	void upd(int p, T val) {
		seg[p += n] = val; for (p /= 2; p; p /= 2) pull(p); }
	T query(int l, int r) {
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = comb(ra,seg[l++]);
			if (r&1) rb = comb(seg[--r],rb);
		}
		return comb(ra,rb);
	}
};

Seg<ll> seg;

const int MOD=1e9+7;
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,q;
    cin>>n>>q;
    seg.init(n+1);
    rep(i,1,n){
        int a;
        cin>>a;
        seg.upd(i,a);
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<seg.query(a,b)<<endl;
    }
}