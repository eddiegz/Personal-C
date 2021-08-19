#include <bits/stdc++.h>
using namespace std;
//#define DEBUG

int n,x;
vector<int> arr;

void solve(){
    cin >> n;
	for(int i=0,x;i<n;++i{
		cin>>x;
		auto index=upper_bound(arr.begin(),arr.end(),x);
		if(index==arr.end()) arr.push_back(x);
		else arr[index-arr.begin()]=x;
	}
	cout<<arr.size<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("dollin.txt","r",stdin);
    freopen("dollout.txt","w",stdout);
    #endif
    solve(); 
}
