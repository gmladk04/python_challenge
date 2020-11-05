#include<iostream>
using namespace std;
long long arr[101] = { 0,1,1, };
long long func(int n) {
	if (n < 3)
		return arr[n];
	else if (arr[n] == 0)
		arr[n] = func(n - 2) + func(n - 3);
	return arr[n];
}
int main() {
	int i;
	int n;
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> n;
		cout << func(n) << endl;
	}
	return 0;
}