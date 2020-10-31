#include<iostream>
using namespace std;
int dp[1002][1002] = { 0, };
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n + 1; i++) {
		dp[i][1] = 1;
		dp[i][i] = 1;
		for (int j = 2; j <= i - 1; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= 10007;
		}
	}
	cout << dp[n + 1][m + 1] << '\n';
}