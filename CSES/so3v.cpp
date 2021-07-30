#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
using vs = vector<str>;
using vc = vector<char>;
using vvi = vector<vi>;
using vvc = vector<vc>;
#define pb push_back
#define pob pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define sc set<char>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<str,int>
#define mis map<int,str>
#define mci map<char,int>
#define mdd map<double,double>
#define mll map<ll,ll>
#define pii pair<int,int>
#define pis pair<int,str>
#define psi pair<str,int>
#define pss pair<str,str>
#define pci pair<char,int>
#define pcc pair<char,char>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cout<<x<<" debug"<<" "<<p<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out").c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;
const int INF=INT_MAX;

int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    int sorted[n];
    for(int i=0; i<n; i++){
  	    cin>>arr[i];
  	    sorted[i] = arr[i];
    }
    sort(sorted, sorted+n);
    bool isPossible = false;
    int left=0, right=n-1, iVal;
    for(int i=0; i<n; i++){
  	    left = 0, right = n-1;
  	    while(left<right){
  	        if(left!=i&&right!=i&&sorted[left]+sorted[right]==x-sorted[i]){
  		    iVal = i;
  		    i=n;
  		    isPossible = true;
  		    break;
  	        }
  	        else if(sorted[left]+sorted[right]<x-sorted[i]) left++;
  	        else right--;
  	    }
    }
    if(!isPossible) cout<<"IMPOSSIBLE";
    else{
  	    int leftVal, rightVal, iAns;
    	    for(int i=0; i<n; i++){
  	            if(sorted[iVal]==arr[i]){
  		        iAns = i+1;
  		        break;
  	        }
  	}
  	for(int i=0; i<n; i++){
  	    if(i+1!=iAns&&sorted[left] == arr[i]){
  		    leftVal = i+1;
  		    break;
  	    }
  	}
  	for(int i=0; i<n; i++){
  	    if(i+1!=iAns&&sorted[right]==arr[i]&&i+1!=leftVal){
  		    rightVal = i+1;
  		    break;
  	    }
  	}
  	cout<<leftVal<<" "<<rightVal<<" "<<iAns<<endl;
    }
}