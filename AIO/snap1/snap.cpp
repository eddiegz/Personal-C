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
#define msi map<string,int>
#define mci map<char,int>
#define mdd map<double,double>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

void ussetio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void ausetio(str inf,str ouf){
    freopen(inf.c_str(),"r", stdin);
    freopen(ouf.c_str(),"w",stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ausetio("snapin.txt","snapout.txt");
    int r,s;
    cin>>r>>s;
    mii sca,ros;
    si sa,ro;
    for(int i=0;i<r;++i){
        int c;
        cin>>c;
        sa.insert(c);
        if(sca.count(c)==false){
            sca[c]=0;
        }
        sca[c]++;
    }
    for(int i=0;i<s;++i){
        int c;
        cin>>c;
        ro.insert(c);
        if(ros.count(c)==false){
            ros[c]=0;
        }
        ros[c]++;
    }
    int answer=0;
    vi common;
    set_intersection(all(sa),all(ro),back_inserter(common));
    int atotal=0,btotal=0;
    for(int ele:common){
        answer+=sca[ele]*ros[ele];
    }
    cout<<answer<<endl;
}