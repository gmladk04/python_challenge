#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int count = 0;
		bool flag = false;
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
			if (s.at(j) == '(')
				count++;
			else
				if (count)
					count--;
				else {
					flag = true;
					break;
				}
					
					
		if (flag || count)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";

	}
}