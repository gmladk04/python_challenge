#include<iostream>
using namespace std;
bool c[20 * 100000 + 10];  
int a[20];
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < (1 << n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) sum += a[j];
		}
		c[sum] = true;
	}
	for (int i = 1;; i++) {
		if (c[i] == false) {
			cout << i << '\n';
			break;
		}
	}
	return 0;
}