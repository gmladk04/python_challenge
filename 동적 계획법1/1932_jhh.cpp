#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[501][501] = {};
	int r = 0;
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j)
			cin >> arr[i][j];
	}
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
	for (int i = 1; i <= n; i++)
		if (r < arr[n][i]) r = arr[n][i];
	cout << r << '\n';
}