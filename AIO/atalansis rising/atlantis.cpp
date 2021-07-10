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

void ussetio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void ausetio(str inf,str ouf){
    freopen(inf.c_str(),"r", stdin);
    freopen(ouf.c_str(),"w",stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;
bool done[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ausetio("atlanin.txt","atlanout.txt");
    int n;
    cin>>n;
    int arr[n],bh[n],nbi[n],nbh[n],bi[n],count=0,sum=0,min=0,nc=0;
    bool ue=true,al[n],pu=true;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        if(i==0 && arr[i]>=arr[i+1]){bh[count]=arr[i];bi[count]=i;count++;}
        else if(i==n-1 && arr[i]>=arr[i-1]){bh[count]=arr[i];bi[count]=i;count++;}
        else{
            if((arr[i]>arr[i+1] && arr[i]>=arr[i-1]) || (arr[i]>=arr[i+1] && arr[i]>arr[i-1])){
                bh[count]=arr[i];
                bi[count]=i;
                count++;
            }
        }
    }
    while(ue){
        for(int i=0;i<count;++i){
            al[i]=true;
        }
        pu=false;
        for(int i=0;i<count-2;++i){
            if(bh[i]>=bh[i+1]&&bh[i+1]<=bh[i+2]){
                if(count>3){pu=true;al[i+1]=false;}
            }
        }
        for(int i=0;i<count;++i){
            if(al[i]==true){
                nbi[nc]=bi[i];
                nbh[nc]=bh[i];
                nc++;
            }
        }
        for(int i=0;i<nc;++i){
            bi[i]=nbi[i];
            bh[i]=nbh[i];
        }
        count=nc;
        nc=0;
        ue=pu;
    }
    for(int i=0;i<count-1;++i){
        if(bh[i]<=bh[i+1]){min=bh[i];}
        if(bh[i]>bh[i+1]){min=bh[i+1];}
        for(int j=bi[i]+1;j<bi[i+1];++j){
            if(arr[j]<min)sum++;
        }
    }
    cout<<sum<<endl;
}
