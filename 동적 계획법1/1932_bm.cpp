#include <iostream>
#include <algorithm>
using namespace std;

int cost[500][500] = { 0, };

void main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) 
		for (int j = 0; j <= i; j++) 
			cin >> cost[i][j];

	for (int i = 1; i < n; i++) 
		for (int j = 0; j <= i; j++) {
			if (j == 0)
				cost[i][j] += cost[i - 1][j];
			else if (j == i)
				cost[i][j] += cost[i - 1][j - 1];
			else
				cost[i][j] += max(cost[i - 1][j - 1], cost[i - 1][j]);
		}

	int maxx = -1;

	for (int i = 0; i < n; i++) 
		if (cost[n - 1][i] > maxx)
			maxx = cost[n - 1][i];
	
	cout << maxx << "\n";
	
}