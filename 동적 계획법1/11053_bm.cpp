#include <iostream>
#define N 1000
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[N] = { 0, };

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int dp[N] = { 0, };

	dp[0] = 1;
	int main_num = arr[0];
	int sub_len = 0;
	int sub_num;

	for (int i = 1; i < n; i++) {
		if (main_num < arr[i]) {
			dp[i] = dp[i - 1] + 1;
			main_num = arr[i];
		}
		else {
			sub_num = arr[i];

			if (sub_num < arr[i])
				sub_len++;
			else if( sub_num > arr[i])
				sub_len = 0;

			if (dp[i - 1] < sub_len) {
				main_num = arr[i];
				dp[i] = sub_len;
				sub_len = 0;
			}
			else
				dp[i] = dp[i - 1];
		}
	}

	cout << dp[n - 1] << "\n";
}