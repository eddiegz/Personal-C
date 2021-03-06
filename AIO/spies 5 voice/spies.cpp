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
using vpii = vector<pair<int,int>>;
#define pb push_back
#define pob pop_back
#define mp make_pair
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
    txtio("spiesin.txt","spiesout.txt");
    int j,g;
    cin>>j;
    vpii jean,god;
    rep(i,1,j){
        int a,b;
        cin>>a>>b;
        jean.pb(mp(a,b));
    }
    cin>>g;
    rep(i,1,g){
        int a,b;
        cin>>a>>b;
        god.pb(mp(a,b));
    }
    int ans=0;
    int indexj=0,indexg=0;
    bool jj=true;
    while(indexj<j && indexg<g){
        if(jean[indexj].ff>=god[indexg].ff&&jean[indexj].ff<=god[indexg].ss){
            if(jean[indexj].ss>god[indexg].ss){
                ans+=(god[indexg].ss-jean[indexj].ff);
                indexg++;
            }
            else{
                ans+=(jean[indexj].ss-jean[indexj].ff);
                indexj++;
            }
        }
        else if(god[indexg].ff>=jean[indexj].ff&&god[indexg].ff<=jean[indexj].ss){
            if(god[indexg].ss>jean[indexj].ss){
                ans+=(jean[indexj].ss-god[indexg].ff);
                indexj++;
            }
            else{
                ans+=(god[indexg].ss-god[indexg].ff);
                indexg++;
            }
        }
        else{
            if(jean[indexj].ff<god[indexg].ff)indexj++;
            else indexg++;
        }
    }
    cout<<ans<<endl;
}
