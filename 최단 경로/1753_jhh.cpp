#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<queue>

#define INF 10000000
using namespace std;
struct Edge {
	int to;
	int cost;
	Edge(int to, int cost) :to(to), cost(cost) {}
};
vector<Edge> a[20001];
int dist[20001];
bool check[20001];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int start;
	scanf("%d", &start);
	for (int i = 0; i < m; i++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		a[x].push_back(Edge(y, z));
	}
	for (int i = 1; i <= n; i++) 
		dist[i] = INF;
	dist[start] = 0;
	priority_queue<pair<int, int>> q;
	q.push(make_pair(0, start));
	while (!q.empty()) {
		auto p = q.top();
		q.pop();
		int x = p.second;
		if (check[x]) continue;
		check[x] = true;
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i].to;
			if (dist[y] > dist[x] + a[x][i].cost) {
				dist[y] = dist[x] + a[x][i].cost;
				q.push(make_pair(-dist[y], y));
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (dist[i] >= INF)
			printf("INF\n");
		else printf("%d\n\n", dist[i]);
	}
	return 0;
}