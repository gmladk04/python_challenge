#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	while (n--) {
		vector<int> v;
		map<string, int> w;
		cin >> m;
		while (m--) {
			string clothes, kinds;
			cin >> clothes>> kinds;
			w[kinds]++;
		}
		int r = 1;
		map<string, int>::iterator iter;
		for (iter = w.begin(); iter != w.end(); iter++)
			r *= (iter->second + 1);
		cout << r - 1 << '\n';
	}
}