#include<bits/stdc++.h>
using namespace std;
//#define DEBUG

vector<int> arr;
int n,m,c;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);
    #endif
    solve();
}

bool check(int x){
    int nb=1,ff=arr[0],onbus=0;
    for(int ele:arr){
        onbus++;
        if(onbus>c||ele-ff>x){
            nb++;
            onbus=1;
            if(nb>m)return false;
            ff=ele;
        }
    }
    return true;
}

void solve(){
    cin>>n>>m>>c;
    for(int i=1;i<=n;++i){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
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