#include <bits/stdc++.h>
using namespace std;

const int MAXN=2e5+5;

void dp(vector<int> a){
    vector<int> dp;
	for (int i : a) {
		int pos = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
		if (pos == dp.size())
			dp.push_back(i);
		else
			dp[pos] = i;
	}
	cout<<dp.size()<<endl;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=1;i<=n;++i){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    dp(arr);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    solve();
}