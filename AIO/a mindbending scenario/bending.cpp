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

const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("bendin.txt","r",stdin);
    freopen("bendout.txt","w",stdout);
    int axl,ayl,axr,ayr,bxl,byl,bxr,byr;
    cin>>axl>>ayl>>axr>>ayr>>bxl>>byl>>bxr>>byr;
    int left=max(axl,bxl),bottom=max(ayl,byl),right=min(axr,bxr),top=min(ayr,byr);
    int area1=(axr-axl)*(ayr-ayl);
    int area2=(bxr-bxl)*(byr-byl);
    int areai;
    if(left<right && bottom<top) areai=(right-left)*(top-bottom);
    else areai=0;
    cout<<area1+area2-areai<<endl;
}