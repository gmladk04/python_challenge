#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int fact(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++)
		a *= i;
	return a;
}
int binomial(int n, int k) {
	return fact(n) / (fact(k) * fact(n - k));
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << binomial(n, m);
}