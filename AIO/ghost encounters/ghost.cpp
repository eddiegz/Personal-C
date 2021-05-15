#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    freopen("ghostin.txt","r",stdin);
    freopen("ghostout.txt","w",stdout);
    map<int,int> m;
    ll n,k,x,t;
    scanf("%lli%lli",&n,&k);
    for (int i=0;i<n;++i){
        scanf("%lli%lli",&x,&t);
        if (m.count(x)){
            m[x]+=t;
        }
        else{
            m[x]=t;
        }
    }
    for (auto x:m){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}