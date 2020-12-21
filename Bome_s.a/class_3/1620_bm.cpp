#include <iostream>
#include <map>
#include <string>
#define N 100'000
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	map<string, int> key_st;
	map<int, string> key_num;

	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;

		key_st.insert(pair<string, int>(st, i + 1));
		key_num.insert(pair<int, string>(i + 1, st));
	}

	for (int i = 0; i < m; i++) {
		string st;
		cin >> st;

		if (atoi(st.c_str())) {
			int num = stoi(st);
			cout << key_num[num] << "\n";
		}
		else {
			cout << key_st[st] << "\n";
		}
	}
}