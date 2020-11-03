#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> st;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (s == "pop")
			if (st.empty())
				cout << -1 << "\n";
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		else if (s == "size")
			cout << st.size() << "\n";
		else if (s == "empty")
			if (st.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		else if (s == "top")
			if (st.empty())
				cout << -1 << "\n";
			else 
				cout << st.top() << "\n";
	}
}