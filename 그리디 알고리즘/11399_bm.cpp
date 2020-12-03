#include <iostream>
#include <algorithm>
#define N 1000

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[N] = { 0, };

	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	
	sort(arr, arr + n);

	int sum=0;
	int num=0;
	for (int i = 0; i < n; i++) {
		num += arr[i];
		sum += num;
	}

	cout << sum << "\n";
}