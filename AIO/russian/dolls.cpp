#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
//#define DEBUG

int n,x;
vector<int> arr;

void solve(){
    cin >> n;
	for(int i=0,x;i<n;i++){
		cin >> x;
		int low=0, high=(int)arr.size();
		while(low<high){
			int mid=(low+high)/2;
			if(arr[mid]>x) high=mid;
			else low=mid+1;
		}
		if(low==(int)arr.size()) arr.push_back(x);
		else arr[low]=x;
	}
	cout << arr.size();
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