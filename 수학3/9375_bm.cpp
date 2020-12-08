#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#define N 100'000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;

		map<string, int> mp;

		for (int j = 0; j < m; j++) {

			string s1, s2;

			cin >> s1 >> s2;

			if (mp.find(s2) == mp.end())
				mp.insert(pair<string, int>(s2, 1));
			else
				mp[s2] += 1;
		}

		map<string, int>::iterator mi;
		int sum = 1;
		for (mi = mp.begin(); mi != mp.end(); mi++) {
			sum *= (mi->second +1 );
		}

		cout << sum-1 << "\n";
	}
}