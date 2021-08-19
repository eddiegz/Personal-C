#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define DEBUG

vector<int> arr;
int n,q;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("haybales.in","r",stdin);
    freopen("haybales.out","w",stdout);
    #endif
    solve();
}

void query(int a,int b){
    int from=lower_bound(arr.begin(),arr.end(),a)-arr.begin();
    int finish=upper_bound(arr.begin(),arr.end(),b)-arr.begin();
    cout<<finish-from<<endl;
}

void solve(){
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        int a;cin>>a;arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    while(q--){
        int a,b;
        cin>>a>>b;
        query(a,b);
    }
}