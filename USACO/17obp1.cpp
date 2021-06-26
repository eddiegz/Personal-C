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
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("lostcow.in","r",stdin);
    //freopen("lostcow.out","w",stdout);
    int x,y,answer=0,current=1;bool c=true;
    cin>>x>>y;
    int loca=x;
    if(x<y){
        while(loca<y){
            if(c){
                loca+=current;
                c=false;}
            else{
                loca-=current;
                c=true;
            }
            if(current==1)answer+=current;
            else answer+=current+current*2;
            current*=2;
        }
        //answer-=(loca-y);
    }
    else{
        while(loca>y){
            if(c){
                loca+=current;
                c=false;}
            else{
                loca-=current;
                c=true;
            }
            if(current==1)answer+=current;
            else answer+=current+current*2;
            current*=2;
        }
        answer-=y-loca;
        }
    cout<<answer<<endl;
}