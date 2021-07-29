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
#define dtest(x,p) cout<<x<<"debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=55;

int grid[MAXN][MAXN];
int step[MAXN][MAXN];
vvi arr;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    txtio("atlanin.txt","atlanout.txt");
    int r,c,a,b;
    cin>>r>>c>>a>>b;
    rep(i,1,r){
        rep(j,1,c){
            cin>>grid[i][j];
            vi temp;temp.pb(grid[i][j]);temp.pb(i);temp.pb(j);
            arr.pb(temp);
        }
    }
    sort(all(arr));
    reverse(all(arr));
    step[a][b]=1;
    int ans=0;
    for(auto sq:arr){
        int h=sq[0],row=sq[1],col=sq[2];
        int s=0;
        if(row>1&&grid[row-1][col]>h&&step[row-1][col]>0){s=max(s,step[row-1][col]);}
        if(row<r&&grid[row+1][col]>h&&step[row+1][col]>0){s=max(s,step[row+1][col]);}
        if(col>1&&grid[row][col-1]>h&&step[row][col-1]>0){s=max(s,step[row][col-1]);}
        if(col<c&&grid[row][col+1]>h&&step[row][col+1]>0){s=max(s,step[row][col+1]);}
        if(s>0){step[row][col]=s+1;}
    }
    rep(i,1,r){
        rep(j,1,c){
            ans=max(ans,step[i][j]);
        }
    }
    cout<<ans<<endl;
}
