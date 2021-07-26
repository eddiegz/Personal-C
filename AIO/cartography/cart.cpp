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
#define dtest(x,p) cout<<x<<"debug"<<" "<<p<<endl;
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

int main(){
    txtio("cartin.txt","cartout.txt");
	int r,c,diff;
	char tmp;
	int count=0;
	scanf("%d %d",&c,&r);
	char cell[c+1][r+1];
	int current;
	int cross=r*c;
	bool found=true;
	int xx[cross],yy[cross];
	for(int j=0; j<r; j++){
        scanf("%c",&tmp); 
        for(int i=0; i<c; i++){
            scanf("%c",&cell[i][j]);
        }
    }	
	for(int i=0; i<c; i++){if(cell[i][0]=='.'){xx[count]=i; yy[count]=0; cell[i][0]='*'; count++; found=true;}}
	for(int i=0; i<c; i++){if(cell[i][r-1]=='.'){xx[count]=i; yy[count]=r-1; cell[i][r-1]='*'; count++; found=true;}}
	for(int i=0; i<r; i++){if(cell[0][i]=='.'){xx[count]=0; yy[count]=i; cell[0][i]='*'; count++; found=true;}}
	for(int i=0; i<r; i++){if(cell[c-1][i]=='.'){xx[count]=c-1; yy[count]=i; cell[c-1][i]='*'; count++; found=true;}}
	if(found==false){printf("%d",cross); return 0;}
	diff=1; current=count;
	while(diff>0){
		diff=0;
		for(int l=0; l<current; l++){
			if(xx[l]>0&&cell[xx[l]-1][yy[l]]=='.'){cell[xx[l]-1][yy[l]]='*'; xx[count]=xx[l]-1; yy[count]=yy[l]; count++; diff++;}
			if(xx[l]<c-1&&cell[xx[l]+1][yy[l]]=='.'){cell[xx[l]+1][yy[l]]='*'; xx[count]=xx[l]+1; yy[count]=yy[l]; count++; diff++;}
			if(yy[l]>0&&cell[xx[l]][yy[l]-1]=='.'){cell[xx[l]][yy[l]-1]='*'; xx[count]=xx[l]; yy[count]=yy[l]-1; count++; diff++;}
			if(yy[l]<r-1&&cell[xx[l]][yy[l]+1]=='.'){cell[xx[l]][yy[l]+1]='*'; xx[count]=xx[l]; yy[count]=yy[l]+1; count++; diff++;}
			if(xx[l]>0&&yy[l]>0&&cell[xx[l]-1][yy[l]-1]=='.'){cell[xx[l]-1][yy[l]-1]='*'; xx[count]=xx[l]-1; yy[count]=yy[l]-1; count++; diff++;}
			if(xx[l]>0&&yy[l]<r-1&&cell[xx[l]-1][yy[l]+1]=='.'){cell[xx[l]-1][yy[l]+1]='*'; xx[count]=xx[l]-1; yy[count]=yy[l]+1; count++; diff++;}
			if(xx[l]<c-1&&yy[l]>0&&cell[xx[l]+1][yy[l]-1]=='.'){cell[xx[l]+1][yy[l]-1]='*'; xx[count]=xx[l]+1; yy[count]=yy[l]-1; count++; diff++;}
			if(xx[l]<c-1&&yy[l]<r-1&&cell[xx[l]+1][yy[l]+1]=='.'){cell[xx[l]+1][yy[l]+1]='*'; xx[count]=xx[l]+1; yy[count]=yy[l]+1; count++; diff++;}
		}
		current=count;
	}
	printf("%d\n",cross-count);
}
