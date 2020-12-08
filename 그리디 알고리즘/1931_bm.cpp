#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector <pair<long long, long long>> vt;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	long long m = 0;

	for (int i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		vt.push_back(make_pair(a, b));
	}

	sort(vt.begin(), vt.end());

	long ed = vt[0].second;
	sum++;

	for (int i = 1; i < n; i++) {
		if (ed == vt[i].first && ed == vt[i].second)
			sum++;
		else if (vt[i].second <= ed)
			ed = vt[i].second;
		else if (ed <= vt[i].first) {
			sum++;
			ed = vt[i].second;
		}
	}

	cout << sum << "\n";
}