#include<iostream>
#define mod 15746

int dp[1000001];
using namespace std;
int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 2] + dp[i - 1]) % mod;
	cout << dp[n] << endl;
	return 0;
}