#include <bits/stdc++.h>
using namespace std;
//#define DEBUG

const int MAXN=5e4+5;

int leaf[MAXN];
int lf[MAXN];
int ri[MAXN];
int lfv[MAXN];
int riv[MAXN];
int n,ans;


void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>lf[i]>>lfv[i]>>ri[i]>>riv[i];
    }
    for(int i=n;i>=1;--i){
        if(lf[i]){
            int lo=lfv[i]+leaf[lf[i]];
            int ro=riv[i]+leaf[ri[i]];
            ans+=abs(lo-ro);
            leaf[i]=max(lo,ro);
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("sculpin.txt","r",stdin);
    freopen("sculpout.txt","w",stdout);
    #endif
    solve();
}