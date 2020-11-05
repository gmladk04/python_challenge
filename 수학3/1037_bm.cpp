#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> vt;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		vt.push_back(num);
	}

	sort(vt.begin(), vt.end());

	if (n % 2 == 0)
		cout << vt[n / 2 - 1] * vt[n / 2] << "\n";
	else
		cout << vt[int(n / 2)] * vt[int(n / 2)] << "\n";
		
}