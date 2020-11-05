#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> m;

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		m.push_back(num);
	}
	sort(m.begin(), m.end());

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		cout << upper_bound(m.begin(),m.end(),num)-lower_bound(m.begin(),m.end(),num) << ' ';
	}

	cout << "\n";
}