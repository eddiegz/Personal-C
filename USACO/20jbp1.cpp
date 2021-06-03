#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    freopen("word.in","r",stdin);freopen("word.out","w",stdout);
    int n,k,current=0;cin>>n>>k;
    for(int i=0;i<n;i++){
        string in;
        cin>>in;
        current+=in.size();
        if (current>0 and i!=0 and current<=k)  cout<<" ";
        if (current<=k) cout<<in;
        else{
            current=in.size();
            cout<<endl<<in;
        }
    }
}