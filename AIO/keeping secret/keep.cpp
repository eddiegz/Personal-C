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
using vc = vector<char>;
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
#define msi map<string,int>
#define mci map<char,int>
#define mdd map<double,double>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

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
char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int checker(char n){
    int index=0;
    for(auto ele:arr){
        if(n!=ele){
            index++;
        }
        else{
            break;
        }
    }
    return index+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    txtio("secrtin.txt","secrtout.txt");
    str line;
    cin>>line;
    int action[line.length()];
    for(int i=0;i<line.length();++i){
        action[i]=checker(line[i]);
    }
    str source;
    cin>>source;
    int index=0,limit=line.length();
    for(auto ele:source){
        int place=checker(ele)-1+action[index];
        if(place>=26){place-=26;}
        cout<<arr[place];
        if(index<limit-1){
            index++;
        }
        else{
            index=0;
        }
    }
    cout<<endl;
}