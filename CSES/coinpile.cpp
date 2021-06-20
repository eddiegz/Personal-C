#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;++i){
        cin>>a>>b;
        if (a<b) swap(a,b);
        if (a>2*b) cout<<"NO"<<"\n";
        else{
            a%=3;b%=3;
            if(a<b) swap(a,b);
            if((a==2 && b==1) || (a==b &&b==0)) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}