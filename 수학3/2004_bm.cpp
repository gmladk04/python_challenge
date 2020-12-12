#include <iostream>
#include <algorithm>

using namespace std;

int return_num(int n,int base){
	int sum = 0;

	for (long long i = base; i <= n; i *= base)
		sum += n / i;

	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	cout << min(return_num(n,2)-return_num(m,2)-return_num(n-m,2), return_num(n, 5) - return_num(m, 5) - return_num(n - m, 5)) << "\n";
}