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

int pos[MAXN],order[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    txtio("slicein.txt","sliceout.txt");
    int n,a,count=1,max=1;
    cin>>n;pos[0]=0;pos[n+1]=0;
    rep(i,1,n){
        cin>>a;
        order[i]=a;
        pos[a]=i;
    }
    for(int i=1; i<=n; i++){
        if(order[pos[i]-1]==0 && order[pos[i]+1]==0)count--;
	    if(order[pos[i]-1]!=0 && order[pos[i]+1]!=0)count++;
	    if(count>max)max=count;
	    order[pos[i]]=0;
    }
	if(n==0)max=0;
    cout<<max<<endl;
}