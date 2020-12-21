#include <iostream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	map<string, string> mp;

	for (int i = 0; i < n; i++) {
		string site, pass;

		cin >> site >> pass;

		mp.insert(pair<string, string>(site, pass));
	}

	for (int i = 0; i < m; i++) {
		string in;

		cin >> in;
		
		cout << mp[in] << "\n";
	}
}