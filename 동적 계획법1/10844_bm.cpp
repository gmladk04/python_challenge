#include <iostream>
#define M 1'000'000'000
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	long long arr[10] = { 0,1,1,1,1,1,1,1,1,1 };
	long long temp[10] = { 0, };

	for (int i = 1; i < n; i++) {

		for (int j = 0; j < 10; j++) {
			if (j == 0)
				temp[1] = (temp[1] + arr[j]) % M;
			else if (j == 9)
				temp[8] = (temp[8] + arr[j]) % M;
			else {
				temp[j + 1] = (temp[j + 1] + arr[j]) % M;
				temp[j - 1] = (temp[j - 1] + arr[j]) % M;;
			}
		}

		for (int j = 0; j < 10; j++) {
			arr[j] = temp[j] % M;
			temp[j] = 0;
		}
	}

	long long sum = 0;

	for (int i = 0; i < 10; i++)
		sum = (sum + arr[i]) % M;

	cout << sum % M << "\n";
}