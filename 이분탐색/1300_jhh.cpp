#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long n, k;
	cin >> n >> k;
	long long left = 1;
	long long right = n * n;
	long long ans = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;
		long long cnt = 0;
		for (long long i = 1; i <= n; i++)
			cnt += min(n, mid / i);
		if (cnt >= k) {
			ans = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	cout << ans << '\n';
	return 0;
}