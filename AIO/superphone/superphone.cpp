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
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    freopen("phonein.txt","r",stdin);
    freopen("phoneout.txt","w",stdout);
    int n,l=0,r=0;cin>>n;
    int a,b,c;cin>>a>>b>>c;l=b+c;r=a;n--;
    for(int i=0;i<n-1;++i){
        int a,b,c;cin>>a>>b>>c;
        l=min(l,r+b);r=min(r,l+b);
        int templ=l;l=r+c;r=templ+a;
    }
    int g;cin>>g;
    r=min(r,l+g);cout<<r<<endl;
}