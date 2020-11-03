#include <iostream>
using namespace std;

int factorial(int a) {
	int sum = 1;

	for (int i = a; i > 0; i--)
		sum *= i;

	return sum;
}

int e(int n, int k) {
	return factorial(n) / ( factorial(n - k) * factorial(k)) ;
}

int main() {

	int n,k;

	cin >> n >> k;

	cout << e(n, k) << "\n";

}