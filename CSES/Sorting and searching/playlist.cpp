#include<bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;

int arr[MAXN];
int n;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    set<int> have;
    int r=0;
    int ans=0;
    for(int i=1;i<=n;++i){
        while(r<n&&!have.count(arr[r+1]))have.insert(arr[++r]);
        ans=max(ans,r-i+1);
        have.erase(arr[i]);
    }
    cout<<ans<<endl;
}