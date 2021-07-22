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
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    txtio("probein.txt","probeout.txt");
    int r,c,rp,cp,rf,cf,n;
    cin>>r>>c>>rp>>cp>>rf>>cf>>n;
    while(n--){
        int a,b,w,l;
        cin>>a>>b;
        if(abs(rp-rf)==abs(cp-cf)){
            w=max(abs(rp-a),abs(cp-b));
            l=max(abs(rf-a),abs(cf-b));
        }
        else{
            w=abs(rp-a)+abs(cp-b);
            l=abs(rf-a)+abs(cf-b);
        }
        if(w==l)cout<<"MOUNTAINS"<<endl;
        else if(w<l)cout<<"WATER"<<endl;
        else cout<<"LAVA"<<endl;
    }
}