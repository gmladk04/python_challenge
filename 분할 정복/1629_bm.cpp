#include <iostream>
using namespace std;

long long pow(long long x, long long y, long long m) {
	if (y == 0)
		return 1;

	long long v = pow(x, y / 2, m);
	v = ( v * v )% m;

	if (y % 2 == 0)
		return v;
	else
		return (v * x) % m;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	cout << pow(a, b, c) << "\n";
}