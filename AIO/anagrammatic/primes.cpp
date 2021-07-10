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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("primes.in","r",stdin);
    freopen("primes.out","w",stdout);
    int arr[22]={2,3,5,7,11,13,17,31,37,71,73,79,97,113,131,199,311,337,373,733,919,991};
    int n;
    cin>>n;
    if(n>991){cout<<0<<endl;}
    else{
        int i=0;
        while(i<22){
            if(arr[i]>n){
                cout<<arr[i];
                break;
            }
            i++;
        }
    }
}