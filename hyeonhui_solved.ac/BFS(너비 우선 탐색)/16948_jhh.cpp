#include<iostream>
#include<tuple>
#include<cstring>
#include<queue>
using namespace std;
int dx[] = { -2,-2,0,0,2,2 }; 
int dy[] = { -1,1,-2,2,-1,1 }; 
int dist[200][200];
int main() {
	int n;
	cin >> n;
	int sx, sy, ex, ey;
	cin >> sx >> sy >> ex >> ey;
	memset(dist, -1, sizeof(dist));
	dist[sx][sy] = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(sx, sy));
	while (!q.empty()) {
		int x, y;
		tie(x, y) = q.front(); q.pop();
		for (int k = 0; k < 6; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(0<=nx&&nx<n&&0<=ny&&ny<n)//범위 검사
				if (dist[nx][ny] == -1) {
					q.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
				}
		}
	}
	cout << dist[ex][ey] << '\n';
	return 0;
}