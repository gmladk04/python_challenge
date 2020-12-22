#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int arr[12] = { 11 };

	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i < 12; i++)
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		cout << arr[t] << "\n";
	}
	
}