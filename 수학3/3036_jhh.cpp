#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int arr[100];
int gcd(int a, int b) {
	return a % b ? gcd(b, a % b) : b;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1; i < n; i++) {
		int temp = gcd(arr[0], arr[i]);
		cout << arr[0] / temp << "/" << arr[i] / temp << endl;
	}
}