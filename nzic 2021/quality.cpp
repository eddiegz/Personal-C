#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
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
#define mdd map<double,double>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

const int MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int time=0,arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int index=0;
    bool p=true;
    while(true){
        if(index==n) break;
        if(arr[index]>=k) time=0;
        else{
            time++;
            if(time==3){
                p=false;
                break;
            }
        }
        index++;
    }
    if(p) cout<<"No Fault"<<endl;
    else{cout<<"Fault Detected"<<endl<<arr[index-2]<<" "<<arr[index-1]<<" "<<arr[index]<<endl;}
}