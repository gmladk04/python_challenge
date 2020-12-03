#include <iostream>
#include <algorithm>
#define N 10'000
using namespace std;

int st[N + 1] = { 0 };
int dp[N + 1] = { 0 };

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> st[i];
	}

	dp[0] = st[0];

	for (int i = 1; i < n; i++) {
		if (i == 1)
			dp[1] = st[0] + st[1];
		else if (i == 2)
			dp[2] = max(max(st[0] + st[1], st[0] + st[2]), st[1] + st[2]);
		else
			dp[i] = max(max(dp[i - 1], dp[i - 3] + st[i - 1] + st[i]), dp[i - 2] + st[i]);
	}

	cout << dp[n - 1] << "\n";
}