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
    str line1;
    cin>>line1;
    mci dic;
    for(char ele:line1){
        if(dic.count(ele)==false){
            dic[ele]=0;
        }
        dic[ele]++;
    }
    bool re=false;
    for(pci ele:dic){
        if(ele.ss>=2) re=true;
    }
    str line2,line3,line4,line5; bool good=true;
    cin>>line2>>line3>>line4>>line5;
    if(line2.length()%2==0 || line3.length()%2==0 || line4.length()%2==0 || line5.length()%2==0) good=false;
    bool ok=true;
    if(re==false){
        if(line3.length()>=line2.length() || line4.length()>=line2.length() || line4.length()>=line3.length() || line5.length()>=line2.length() || line5.length()>=line3.length() || line5.length()>=line4.length()) ok=false;
    }
    if(re & good){
        cout<<"best"<<endl;
    }
    else if(re==false && ok==true) cout<<"ok"<<endl;
    else cout<<"bad"<<endl;
}