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

void ausetio(string s){
    freopen((s+"in.txt").c_str(),"r", stdin);
    freopen((s+"out.txt").c_str(),"w",stdout);
}

const int MOD=1e9+7;
const int MAXN=1e5;
int p[MAXN],h[MAXN],s[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ussetio("hps");
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        char action;
        cin>>action;
        if(action=='P') p[i]=p[i-1]+1;
        else p[i]=p[i-1];
        if(action=='H')h[i]=h[i-1]+1;
        else h[i]=h[i-1];
        if(action=='S')s[i]=s[i-1]+1;
        else s[i]=s[i-1];
    }
    int answer=0;
    for(int i=1;i<=n;++i){
        answer=max(answer,p[i]+h[n]-h[i]);
        answer=max(answer,p[i]+s[n]-s[i]);
    }
    for(int i=1;i<=n;++i){
        answer=max(answer,h[i]+p[n]-p[i]);
        answer=max(answer,h[i]+s[n]-s[i]);
    }
    for(int i=1;i<=n;++i){
        answer=max(answer,s[i]+h[n]-h[i]);
        answer=max(answer,s[i]+p[n]-p[i]);
    }
    cout<<answer<<endl;
}