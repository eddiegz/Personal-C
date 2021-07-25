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
#define dtest(x,p) cout<<x<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
//#define DEBUG

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
    cin.tie(nullptr);cout.tie(nullptr);
    int n,t,p;
    vi rank;
    cin>>n>>t>>p;
    bool status[n+1][t+1];int score[t+1];
    rep(i,1,n){
        rep(j,1,t){
            cin>>status[i][j];
        }
    }
    rep(i,1,t){
        int current=0;
        rep(j,1,n){
            if(!status[j][i]){current++;}
        }
        score[i]=current;
    }
    map<int,pii> recorder;
    int phiscore=0;
    rep(i,1,n){
        int current=0;
        int number=0;
        rep(j,1,t){
            if(status[i][j]){current+=score[j];number++;}
        }
        recorder[i]=mp(number,current);
        if(i==p){
            phiscore=current;
        }
        rank.pb(current);
    }
    int phisrank=1;
    sort(all(rank));
    phisrank=rank.end()-ub(all(rank),phiscore)+1;
    #ifdef DEBUG
    cout<<phisrank<<"ensure"<<endl;
    #endif
    map<int,pii> same;
    int phisnumber=recorder[p].ff;
    for(auto ele:recorder){
        #ifdef DEBUG
        cout<<ele.ff<<"id"<<endl;
        cout<<ele.ss.ss<<"score"<<phiscore<<endl;
        cout<<ele.ss.ff<<"number"<<phisnumber<<" "<<endl;
        cout<<endl;
        #endif
        if(ele.ff!=p&&ele.ss.ss==phiscore&&((ele.ss.ff>phisnumber)||(ele.ss.ff==phisnumber&&ele.ff<p))){
            phisrank++;
        }
    }
    cout<<phiscore<<" "<<phisrank<<endl;
}