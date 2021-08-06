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
#define qi queue<int>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cerr<<x<<" debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
//#define DEBUG

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
const int INF=INT_MAX;

bool check(int n,char arr[],int x){
    char le[]={'S','N','A','K','E'};
    int current=0,has=0;
    rep(i,1,n){
        if(arr[i]==le[current]){
            has++;
        }
        if(has==x){
            if(current==4){
                return true;
            }
            else{
                current++;
                has=0;
            }
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    txtio("snakein.txt","snakeout.txt");
    #endif
    int n,ans=0;
    cin>>n;
    char arr[MAXN];
    rep(i,1,n){
        cin>>arr[i];
    }
    int lo=0,hi=n;
    while(lo!=hi){
        int mid=(lo+hi+1)/2;
        if(check(n,arr,mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<lo<<endl;
}