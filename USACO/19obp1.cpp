#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);
    int bi,bj,ri,rj,li,lj;
    for(int i=0;i<10;i++){
        string in;
        cin>>in;
        for(int e=0;e<10;e++){
            if(in[e]=='B') {bi=i; bj=e;}
            else if(in[e]=='R') {ri=i;rj=e;}
            else if(in[e]=='L') {li=i;lj=e;}
        }
    }
    int br=abs(bi-ri)+abs(bj-rj);
    int bl=abs(bi-li)+abs(bj-lj);
    int rl=abs(ri-li)+abs(rj-lj);
    if ((bi==li || bj==lj) && bl==br+rl) cout<<bl+1<<endl;
    else cout<<bl-1<<endl;
}