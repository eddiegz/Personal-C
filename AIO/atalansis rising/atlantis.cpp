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
const int MAXN=1e6+1;

bool lef[MAXN];
bool rig[MAXN];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ausetio("atlanin.txt","atlanout.txt");
    int n;
    cin>>n;
    int arr[n],answer=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int ml=0,mr=0;
    for(int i=0;i<n;++i){
        if(ml>arr[i]){lef[i]=true;}
        else{ml=arr[i];}
    }
    for(int i=n-1;i>=0;--i){
        if(mr>arr[i]){rig[i]=true;}
        else{mr=arr[i];}
    }
    for(int i=0;i<n;++i){
        if(lef[i]&&rig[i])answer++;
    }
    cout<<answer<<endl;
}
