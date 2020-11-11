#include <iostream>
using namespace std;

long long fiboarr[50] = { 0,1, };

long long fibo(int N)
{
	if (N == 0 || N == 1)
		return fiboarr[N];
	else if (fiboarr[N] == 0)
		fiboarr[N] = fibo(N - 1) + fibo(N - 2);

	return fiboarr[N];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num == 0)
			cout << "1 0" << '\n';
		else
			cout << fibo(num - 1) << ' ' << fibo(num) << '\n';
	}
}