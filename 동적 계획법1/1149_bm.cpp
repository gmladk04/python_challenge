#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int house[1000][3] = { 0, };
	int cost[1000][3] = { 0, };

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> house[i][j];

	cost[0][0] = house[0][0];
	cost[0][1] = house[0][1];
	cost[0][2] = house[0][2];

	for (int i = 1; i < n; i++) {

		cost[i][0] = min(cost[i - 1][1], cost[i - 1][2]) + house[i][0];
		cost[i][1] = min(cost[i - 1][0], cost[i - 1][2]) + house[i][1];
		cost[i][2] = min(cost[i - 1][0], cost[i - 1][1]) + house[i][2];
	}

	cout << min(cost[n - 1][0], min(cost[n - 1][1], cost[n - 1][2])) << "\n";
}