#include<bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;

int xc[MAXN];
int yc[MAXN];
int n;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    freopen("spiesin.txt","r",stdin);
    freopen("spiesout.txt","w",stdout);
    solve();
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>xc[i]>>yc[i];
    }
    sort(xc+1,xc+n+1);
    sort(yc+1,yc+n+1);
    int m=(n+1)/2;
    cout<<xc[m]<<" "<<yc[m]<<endl;
}