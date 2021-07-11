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

void inoutio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(),"r", stdin);
    freopen(ouf.c_str(),"w",stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;

bool lef,rig,up,down;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    txtio("chimpin.txt","chimpout.txt");
    int answer=0,x,y;
    int cx=0,cy=0,step=0;
    cin>>x>>y;
    rig=true;
    while(cx!=x || cy!=y){
        if(cx==x && cy==y)break;
        if(rig){
            step++;
            for(int i=0;i<step;++i){
                if(cx==x&&cy==y)break;
                cx++;
                answer++;
            }
            rig=false;
            up=true;
        }
        if(cx==x && cy==y)break;
        if(up){
            for(int i=0;i<step;++i){
                if(cx==x && cy==y)break;
                cy++;
                answer++;
            }
            up=false;
            lef=true;
            step++;
        }
        if(cx==x && cy==y)break;
        if(lef){
            for(int i=0;i<step;++i){
                if(cx==x && cy==y)break;
                cx--;
                answer++;
            }
            lef=false;
            down=true;
        }
        if(cx==x && cy==y)break;
        if(down){
            for(int i=0;i<step;++i){
                if(cx==x && cy==y)break;
                cy--;
                answer++;
            }
            down=false;
            rig=true;
        }
        if(cx==x && cy==y)break;
    }
    cout<<answer<<endl;
}