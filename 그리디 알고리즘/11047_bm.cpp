#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int count = 0;
	int n, k;
	int mo[10];

	cin >> n >> k;

	for (int i = 0; i < n; i++) 
		cin >> mo[i];
	
	for (int j = n - 1; j >= 0; j--) {
		if (k >= mo[j]) {
			count += k / mo[j];
			k %= mo[j];
		}
	}

	cout << count << "\n";
}