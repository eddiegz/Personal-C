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
#define __ int
#define ___ main
#define ____ pii
#define _____ ios::sync_with_stdio(false);cin.tie(0);
#define ______ cin
#define _______ rep(i,1,n)
#define ________ =
#define _________ make_pair
#define __________ if
#define ___________ else
#define ____________ cout
#define _____________ txtio("postin.txt","postout.txt");
#define ______________ tp
#define _______________ a
#define ________________ b
#define _________________ n
#define __________________ ans
#define ___________________ endl
#define ____________________ ==
#define _____________________ ss
#define ______________________ 0
#define _______________________ i
#define ________________________ 1

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

/*
The following solution is just for fun.
*/

____ ______________;
__ ___(){
    _____
    _____________
    __ _________________,__________________ ________ ______________________;
    ______>>_________________;
    _______{
        __ _______________,________________;
        ______>>_______________>>________________;
        __________(_______________________ ____________________ ________________________)______________ ________ _________(_______________,_______________+________________);
        ___________{
            __________(_______________<______________._____________________){
                __________________ ________ _______________________;
                ______________ ________ _________(_______________,_______________+________________);
            }
        }
    }
    ____________<<__________________<<___________________;
}

/*
The actual solution follows

pii tp;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    txtio("postin.txt","postout.txt");
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;++i){
        int a,b;
        cin>>a>>b;
        if(i==1)tp=make_pair(a,a+b);
        else{
            if(a<tp.ss){
                ans=i;
                tp=make_pair(a,a+b);
            }
        }
    }
    cout<<ans<<endl;
}

*/