#include <iostream>
#include <algorithm>
#include <iterator> 
#include <set>
#include <string>
#define N 100'000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	set<string> s1;
	set<string> s2;

	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;

		s1.insert(st);
	}
	for (int i = 0; i < m; i++) {
		string st;
		cin >> st;

		s2.insert(st);
	}

	set<string> result;

	
	set_intersection(begin(s1), end(s1), begin(s2), end(s2),inserter(result, begin(result)));

	cout << result.size() << "\n";

	set<string>::iterator si;


	for (si = result.begin(); si != result.end(); si++)
		cout << *si << "\n";
}