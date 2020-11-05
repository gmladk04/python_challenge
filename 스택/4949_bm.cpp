#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	while (true) {
		string input;
		getline(cin, input);

		if (input.size() == 1)
			break;

		vector<int> vt;
		bool flag = false;
		for (int i = 0; i < input.size(); i++) {
			switch (input[i]) {
			case '(':
				vt.push_back(1);
				break;
			case '[':
				vt.push_back(0);
				break;
			case ')':
				if (!vt.empty() && vt.back())
					vt.pop_back();
				else
					flag = true;
				break;
			case ']':
				if (!vt.empty() && !vt.back())
					vt.pop_back();
				else
					flag = true;
				break;
			}

			if (flag)
				break;
		}

		if (flag || !vt.empty())
			cout << "no" << "\n";
		else
			cout << "yes" << "\n";

	}
}