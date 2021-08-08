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
#define ts to_string
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
#define vpii vector<pii>
#define qpii queue<pii>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cerr<<x<<" debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
#define DEBUG

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXR=15;
const int MAXC=1e5+5;
const int INF=INT_MAX;

int grid[MAXR][MAXC];
int arr[MAXC][4];
int r,c,q,ans;

bool check(pii cell){
    int row=cell.ff,col=cell.ss;
    int h=grid[row][col];
    if(row>1&&grid[row-1][col]>h){
        return false;
    }
    if(row<r&&grid[row+1][col]>h){
        return false;
    }
    if(col>1&&grid[row][col-1]>h){
        return false;
    }
    if(col<c&&grid[row][col+1]>h){
        return false;
    }
    return true;
}

int peak(pii cell){
    int row=cell.ff,col=cell.ss;
    int co=0;
    if(check({row,col})){
        return 1;
    }
    if(row>1&&check({row-1,col})){
        co++;
    }
    if(row<r&&check({row+1,col})){
        co++;
    }
    if(col>1&&check({row,col-1})){
        co++;
    }   
    if(col<c&&check({row,col+1})){
        co++;
    }
    return co;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    txtio("janitorin.txt","janitorout.txt");
    cin>>r>>c>>q;
    rep(i,1,r){
        rep(j,1,c){
            cin>>grid[i][j];
        }
    }
    rep(i,1,q){
        rep(j,1,3){
            cin>>arr[i][j];
        }
    }
    rep(i,1,r){
        rep(j,1,c){
            if(check({i,j})){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    rep(c,1,q){
        int i=arr[c][1],j=arr[c][2],h=arr[c][3];
        auto before=peak({i,j});
        grid[i][j]=h;
        auto after=peak({i,j});
        ans+=after-before;
        cout<<ans<<endl;
    }
}