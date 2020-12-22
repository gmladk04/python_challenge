#include <iostream>
#include <algorithm>
#include <cmath>
#define N 50'000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;

	cin >> n;

	int arr[N+1] = { 0, };

	for (int i = 1; i <=n ; i++) {
		if (i == pow(int((pow(i, 0.5))), 2))//제곱수이면
			arr[i] = 1;
		else
		{
			int minn = 100;
			for (int j = 1; j <= i/2; j++) {
				if (arr[j] + arr[i - j] < minn)
					minn = arr[j] + arr[i - j];
                if(minn == 2)
                    break;
			}
			arr[i] = minn;
		}
	}

	cout << arr[n] << "\n";
}