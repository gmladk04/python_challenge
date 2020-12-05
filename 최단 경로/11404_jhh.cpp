#include<iostream>
using namespace std;
int a[1001][1001];
const int inf = 1000000;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j)
				a[i][j] = 0;
			else
				a[i][j] = inf;
		}
	}
	for (int i = 0; i < m; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		if (a[from][to] > cost) a[from][to] = cost;
	}
	for (int k =1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				if (a[i][j] > a[i][k] + a[k][j])
					a[i][j] = a[i][k] + a[k][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] == inf) a[i][j] = 0;
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;

}