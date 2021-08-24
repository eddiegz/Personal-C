#include<bits/stdc++.h>
using namespace std;
//#define DEBUG

const int MAXN=1e5+5;

int arr[MAXN];
int ans,s;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("balancein.txt","r",stdin);
    freopen("balanceout.txt","w",stdout);
    #endif
    solve();
}

void solve(){
    cin>>s;
    for(int i=1;i<=s;++i){
        cin>>arr[i];
    }
    int l=1,r=s;
    while(l<s){
        if(arr[l]>arr[s]){
            ans++;
            arr[s-1]+=arr[s];
            arr[s]=0;
            s--;
        }
        else if(arr[l]<arr[s]){
            ans++;
            arr[l+1]+=arr[l];
            arr[l]=0;
            l++;
        }
        else{
            l++;
            s--;
        }
    }
    cout<<ans<<endl;
}