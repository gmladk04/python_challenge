#include <iostream>
using namespace std;

long long fiboarr[101] = { 0,1,1, };

long long fibo(int N)
{
	if ( N <=2)
		return fiboarr[N];
	else if (fiboarr[N] == 0)
		fiboarr[N] = fibo(N - 2) + fibo(N - 3);

	return fiboarr[N];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		cout << fibo(num) << '\n';
	}
	
}