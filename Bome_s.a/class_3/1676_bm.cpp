#include <iostream>
#include <algorithm>
#define N 500

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[N + 1][2] = { 0, };

	arr[0][0] = 0;
	arr[0][1] = 0;

	for (int i = 1; i <= n; i++) {
		int count2 = 0;
		int num2 = i;

		while (num2 % 2 == 0) {
			count2++;
			num2 /= 2;
		}
			
		int count5 = 0;
		int num5 = i;

		while (num5 % 5 == 0) {
			count5++;
			num5 /= 5;
		}

		arr[i][0] = arr[i-1][0] + count2;
		arr[i][1] = arr[i-1][1] + count5;
	}

	cout <<	min(arr[n][0], arr[n][1]) << "\n";
}