#include <iostream>
using namespace std;

long long fiboarr[1000001] = { 0,1,2, };

long long fibo(long long N)
{
	if ( N == 1 || N == 2)
		return fiboarr[N];
	else if (fiboarr[N] == 0)
		fiboarr[N] = (fibo(N - 1) % 15746 + fibo(N - 2) % 15746) % 15746;

	return fiboarr[N];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long num;
	cin >> num;

	cout << fibo(num) << '\n';

}