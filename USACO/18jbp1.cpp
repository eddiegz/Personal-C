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
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

const int MOD=1e9+7;

void setIO(string s) {
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

struct Rect {
	int x1, x2, y1, y2;
	int area () {
		return (x2-x1)*(y2-y1);
	}
};
int intersection (Rect fi, Rect se) {
	int overlapX = max(0, min(fi.x2, se.x2)-max(fi.x1, se.x1));
	int overlapY = max(0, min(fi.y2, se.y2)-max(fi.y1,se.y1));	
	return overlapX*overlapY;
}
bool coverEntirely (int x1, int x2, int y1, int y2) {
	if (x1 >= y1 && x2 <= y2) return true;
	return false;
}
bool inside (Rect fi, Rect se) {
	if (fi.x1 < se.x1 && fi.x2 > se.x2) return true;
	if (fi.y1 < se.y1 && fi.y2 > se.y2) return true;
	return false;
}
void solve (Rect fi, Rect se) {
	bool X = coverEntirely(fi.x1, fi.x2, se.x1, se.x2);
	bool Y = coverEntirely(fi.y1, fi.y2, se.y1, se.y2);
	if (intersection(fi, se) == 0 || 
			(!X && !Y)|| inside(fi, se)) {
		cout << fi.area();
		return;
	}
	cout << fi.area()-intersection(fi, se);
}

int main() {
	setIO("billboard");
	Rect first, second;
	cin >> first.x1 >> first.y1 >> first.x2 >> first.y2;
	cin >> second.x1 >> second.y1 >> second.x2 >> second.y2;
	solve(first, second);
	return 0;
}
