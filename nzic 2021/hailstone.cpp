#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = long double;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>; 
using vs = vector<str>;
using vvi = vector<vi>;
#define pb push_back
#define pob pop_back
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<string,int>
#define mci map<char,int>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

void solve(vi arr){
    for(int i : arr){
        int time=0;
        while(i!=1){
            if(i%2!=0) i=i*3+1;
            else i/=2;
            time+=1;
        }
        cout<<time<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    vi arr;int n;
    cin>>n;arr.pb(n);
    while(n!=0){
        cin>>n;
        if (n!=0)arr.pb(n);
    }
    solve(arr);
}