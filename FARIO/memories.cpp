#include <bits/stdc++.h>
using namespace std;
//#define int long long
//#define DEBUG

int n,r,c;
vector<int> arr;
vector<int> diff;

bool check(int x){
    int i=0,ans=0;
    while(i<=n-c){
        if(diff[i]<=x){
            ans++;
            if(ans==r){
                return true;
            }
            i+=c;
        }
        else{
            i++;
        }
    }
    return false;
}

void solve(){
    cin>>n>>r>>c;
    for(int i=1;i<=n;++i){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    #ifdef DEBUG
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    #endif
    for(int i=0;i<=n-c;++i){
        diff.push_back(arr[i+c-1]-arr[i]);
    }
    #ifdef DEBUG
    for(auto ele:diff){
        cout<<ele<<" ";
    }
    cout<<endl;
    #endif
    int lo=0,hi=1e9;
    while(lo<hi){
        int mid=(lo+hi)/2;
        if(check(mid)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<lo<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}