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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int a=0,f=0,tax=0;
    for(int i : arr){
        if(a<=f){
            a+=i;
            cout<<i<<" a"<<endl;
        }
        else{
            f+=i;
            cout<<i<<" f"<<endl;
        }
        tax+=abs(a-f);
    }
    cout<<tax<<endl;
}