#include <iostream>
#define N 1000
#define M 10'007
using namespace std;

long long arr[N+1] = { 0, };
 
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	arr[1] = 1;
	arr[2] = 2;

	int n;
	cin >> n;

	for (int i = 3; i <= n; i++) 
		arr[i] = (arr[i - 1] + arr[i - 2]) % M;
	
	cout << arr[n];
}