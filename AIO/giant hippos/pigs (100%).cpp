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
 
int main() {
    freopen("hippoin.txt","r",stdin);
    freopen("hippoout.txt","w",stdout);
	int n,h,f;
	int sum = 0, max = 0, maxid;
	scanf("%d %d %d",&n, &h, &f);
	int e[h], d[h + 1];
	int init=f;
	for(int i=0; i<h; i++) {scanf("%d", &e[i]);}
	d[0]=e[0]-1;
	for(int i=1; i<h; i++){d[i] = e[i]-e[i-1]-1;}
	d[h]=n-e[h-1];
	bool done=false;
	if(f%2 == 1) {
			if(d[h]>d[0]) {sum+=d[h]; d[h]=0;}
			else {sum+=d[0];d[0]=0;}
			f--;
		}
	while(f>0 && f>init-2*h){
		max=0;
		for(int i=0; i<=h; i++){if(d[i]>max){max=d[i]; maxid=i;}}
		
		if(f>1){
			if(d[h]>=max){f--; sum+=d[h]; d[h]=0;}
			else if(d[0]>=max){f--; sum+=d[0]; d[0]=0;}
			else if(d[0]+d[h]>=max){f-=2; sum+=d[0]+d[h]; d[h]=0; d[0]=0;}
			else{sum+=d[maxid]; f-=2; d[maxid]=0;}
		}
		if(f == 1) {
			if(d[h]>d[0]) {sum+=d[h];}
			else {sum+=d[0];}
			f=0;
		}
	}
	printf("%d", sum);
}
