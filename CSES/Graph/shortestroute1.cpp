#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pb push_back

vector<pair<int, int>> graph[100000];
ll dist[100000];
int N;

void dijkstra(int src) {
	for (int i = 0; i < N; ++i) dist[i] = LLONG_MAX;

	using T = pair<ll,int>; priority_queue<T,vector<T>,greater<T>> pq;
	dist[src] = 0;
	pq.push({0, src});

	while (pq.size()) {
		ll cdist; int node; tie(cdist, node) = pq.top(); pq.pop();
		if (cdist != dist[node]) continue;
		for (pair<int, int> i : graph[node]) {
			if (cdist+i.second < dist[i.first]) {
				pq.push({dist[i.first] = cdist+i.second, i.first});
			}
		}
	}
}

int main() {
	int M; cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		int a,b,c; cin >> a >> b >> c;
		graph[a-1].pb({b-1,c});
	}
	dijkstra(0);
	for (int i = 0; i < N; ++i) cout << dist[i] << " ";
    cout<<endl;
}