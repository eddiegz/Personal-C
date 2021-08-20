#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

const int MAXN=2e5+5;

multiset<int> price;
int cus[MAXN];
int n,m;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        int a;cin>>a;
        price.insert(a);
    }
    for(int i=1;i<=m;++i){
        cin>>cus[i];
    }
    for(int i=1;i<=m;++i){
        if(price.upper_bound(cus[i])!=price.begin()){
            auto it=price.upper_bound(cus[i]);
            cout<<*(--it)<<endl;
            price.erase(it);
        }
        else{
            cout<<-1<<endl;
        }
    }
}