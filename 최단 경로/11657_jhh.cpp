#include<iostream>
#include<vector>
using namespace std;
struct Edge {
	int from;
	int to;
	int cost;
};
long long dist[501];
long long inf = 10000000;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	int n, m;
	cin >> n >> m;
	vector<Edge> a(m);
	for (int i = 0; i < m; i++)
		cin >> a[i].from >> a[i].to >> a[i].cost;
	for (int i = 1; i <= n; i++)
		dist[i] = inf;
	dist[1] = 0;
	bool negative_cycle = false;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			int x = a[j].from;
			int y = a[j].to;
			int z = a[j].cost;
			if (dist[x] != inf && dist[y] > dist[x] + z) {
				dist[y] = dist[x] + z;
				if (i == n)
					negative_cycle = true;
			}
		}
	}
	if (negative_cycle)
		cout << -1 << '\n';
	else {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == inf) dist[i] = -1;
			cout << dist[i] << '\n';
		}
	}
	return 0;
}