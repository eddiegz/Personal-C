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
	int n,m;
	cin>>n>>m;
	int answer=50000;
	mii toggle;
	bool p=true;
	while(m--){
		char action;
		int number;
		cin>>action>>number;
		if(action=='t'){
			if(toggle.count(number)==false){
				toggle[number]=0;
			}
			toggle[number]++;
			if(toggle[number]%2!=0 && number<50000)answer--;
			else if(toggle[number]%2==0 && number<50000 && toggle[number]>0)answer++;
			else if(toggle[number]%2==0 && number==50000)answer=50000;
			else if(toggle[number]%2!=0 && number==50000){answer--;p=false;}
		}
		if(action=='o'){
			int current=0;
			for(int i=50001;i<number+1;++i){
				if(toggle[i]%2!=0){
					current--;
				}
			}
			if(number==50000 && !p)cout<<"UNOFFICIAL"<<endl;
			else if (toggle[number]%2!=0)cout<<"UNOFFICIAL"<<endl;
			else{cout<<answer+current+50<<endl;}
		}
	}
}