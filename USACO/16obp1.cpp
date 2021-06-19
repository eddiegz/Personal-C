#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb pushback

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        int s;
        cin>>s;
        arr[i]=s;
    }
    int answer=0;
    for(int i=0;i<n;i++){
        int start=arr[i],current=0;
        for(int j=0;j<n;j++){
            if((arr[j]-start<=k && arr[j]-start>=0) || (arr[j]-start>=k && arr[j]-start<=0)) current++;
        }
        answer=max(answer,current);
    }
    cout<<answer<<endl;
    return 0;
}