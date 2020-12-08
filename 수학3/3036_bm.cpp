#include <iostream>
#define N 100

using namespace std;

int get_gcd(int n1, int n2) {

	while (n1 != n2) {
		n1 > n2 ? (n1 -= n2) : (n2 -= n1);
	}

	return n1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int base;
	cin >> base;

	for (int i = 1; i < n; i++) {
		int num;

		cin >> num;

		int gcd = get_gcd(base, num);

		cout << base / gcd << '/' << num / gcd << "\n";
	}
}