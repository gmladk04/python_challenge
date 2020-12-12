#include <iostream>
#define N 1'000
#define M 10'007
using namespace std;

int arr[N + 1][N + 1] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	arr[1][0] = 1;
	arr[1][1] = 1;

	for(int i=2;i<N+1;i++)
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i)
				arr[i][j] = 1;
			else
				arr[i][j] = (arr[i - 1][j - 1]%M + arr[i - 1][j]%M)%M;
		}

	int n, k;

	cin >> n >> k;

	cout << arr[n][k] << "\n";
}