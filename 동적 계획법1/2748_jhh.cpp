#include<iostream>
using namespace std;
long long fiboarr[100] = { 0,1, };
long long fibo(int n) {
	if (n == 0 || n == 1)
		return fiboarr[n];
	else if (fiboarr[n] == 0)
		fiboarr[n] = fibo(n - 1) + fibo(n - 2);
	return fiboarr[n];
}
int main() {
	int n;
	cin >> n;
	cout << fibo(n);
}