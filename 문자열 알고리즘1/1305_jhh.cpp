#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> preprocessing(string p) {
	int m = p.size();
	vector<int> next(m);
	next[0] = 0;
	int j = 0;
	for (int i = 1; i < m; i++) {
		while (j > 0 && p[i] != p[j])
			j = next[j - 1];
		if (p[i] == p[j]) {
			next[i] = j + 1;
			j += 1;
		}
		else
			next[i] = 0;
	}
	return next;
}
int main() {
	int n;
	string p;
	cin >> n >> p;
	vector<int> next = preprocessing(p);
	printf("%d\n", n - next[n - 1]);
	return 0;
}