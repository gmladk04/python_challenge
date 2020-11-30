#include <iostream>
#define N 1'000'000
using namespace std;

int dp[N+1] = { 0 };

int main() {
	int n;
	cin >> n;
	
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 2; i <= n; i++) {
		if (i*2 <= n && (dp[i * 2] == 0 || dp[i * 2] > dp[i] +1))
			dp[i * 2] = dp[i] + 1;
		
		if (i * 3 <= n && (dp[i * 3] == 0 || dp[i * 3] > dp[i] +1))
			dp[i * 3] = dp[i] + 1;
		
		if (i + 1 <= n && (dp[i + 1] ==0 || dp[i + 1] > dp[i] + 1))
			dp[i + 1] = dp[i] + 1;
	}


	cout << dp[n] << "\n";
}