#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vs vector<string>
#define pb pushback
#define pob popback
#define si set<int>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<string,int>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define endl "\n"


void solve(ll y,ll x){
    ll answer=0;
    ll z=max(y,x);
    ll sz=(z-1)*(z-1);
    if(z%2==0){
        if(z==x){
            answer=sz+y;
        }
        else{
            answer=sz+2*z-x;
        }
    }
    else{
        if(y==z){
            answer=sz+x;
        }
        else{
            answer=sz+2*z-y;
        }
    }
    cout<<answer<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll y,x;
        cin>>y>>x;
        solve(y,x);
    }
}