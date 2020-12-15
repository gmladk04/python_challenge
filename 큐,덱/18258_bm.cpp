#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	queue<int> qe;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s == "push") {
			int num;
			cin >> num;
			qe.push(num);
		}
		else if (s == "pop")
			if (qe.empty())
				cout << -1 << "\n";
			else {
				cout << qe.front() << "\n";
				qe.pop();
			}
		else if (s == "size")
			cout << qe.size() << "\n";
		else if (s == "empty")
			if (qe.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		else if (s == "front")
			if (qe.empty())
				cout << -1 << "\n";
			else
				cout << qe.front() << "\n";
		else if (s == "back")
			if (qe.empty())
				cout << -1 << "\n";
			else
				cout << qe.back() << "\n";
	}
}