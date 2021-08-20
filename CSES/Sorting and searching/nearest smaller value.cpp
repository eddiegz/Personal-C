#include<bits/stdc++.h>
using namespace std;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}

void solve(){
    stack<pair<int,int>> stack;
    int n;
    cin>>n;
    stack.push({0,0});
    for(int i=1;i<=n;++i){
        int a;cin>>a;
        while(!stack.empty()&&stack.top().first>=a)stack.pop();
        cout<<stack.top().second<<" ";
        stack.push({a,i});
    }
}