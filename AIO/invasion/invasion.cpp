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
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)

void inoutio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    txtio("invin.txt","invout.txt");
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    map<char,set<char>> name;
    int ans=0;
    for(int i=0;i<r;++i){
        for(int j=0;j<c-1;++j){
            char ce1=arr[i][j],ce2=arr[i][j+1];
            if(ce1!=ce2){
                if(name.count(ce1)==false)name[ce1].insert(ce2);
                if(name.count(ce2)==false)name[ce2].insert(ce1);
                if(name[ce2].count(ce1)==false)name[ce2].insert(ce1);
                if(name[ce1].count(ce2)==false)name[ce1].insert(ce2);
            }
        }
    }
    for(int j=0;j<c;++j){
        for(int i=0;i<r-1;++i){
            char ce1=arr[i][j],ce2=arr[i+1][j];
            if(ce1!=ce2){
                if(name.count(ce1)==false)name[ce1].insert(ce2);
                if(name.count(ce2)==false)name[ce2].insert(ce1);
                if(name[ce2].count(ce1)==false)name[ce2].insert(ce1);
                if(name[ce1].count(ce2)==false)name[ce1].insert(ce2);
            }
        }
    }
    for(auto ele : name){
        int length=ele.ss.size();
        ans=max(ans,length);
    }
    cout<<ans<<endl;
}