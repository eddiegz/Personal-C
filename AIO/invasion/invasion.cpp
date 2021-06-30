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
using vvs = vector<vs>;
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
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("invin.txt","r",stdin);
    freopen("invout.txt","w",stdout);
    int r,c;
    cin>>r>>c;
    vs arr;msi times;map<str,msi> name;
    for(int i=0;i<r;++i){
        str line;cin>>line;
        arr.pb(line);
    }
    for(int i=0;i<r;++i){
        for(int e=0;e<c;++e){
            if(name.count(line[i][e])==false){
                name[line[i][e]]
            }
        }
    }
}