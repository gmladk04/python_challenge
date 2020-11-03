#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if ((a % b) == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main() {
	
	int a, b;
	int result;

	cin >> a >> b;

	result = a > b ? gcd(a, b) : gcd(b, a);
	cout << result << "\n";
	cout << a * b / result << "\n";
}