#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> stack;
	vector<char> step;
	int base = 1;
	bool flag = false;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		if (stack.empty() || stack.back() < num) { // case : push
			for (int j = base; j <= num; j++) {
				stack.push_back(j);
				step.push_back('+');
			}
			stack.pop_back();
			step.push_back('-');
			base = num + 1;
		}
		else 
			if (stack.back() == num) { // case : pop
				stack.pop_back();
				step.push_back('-');
			}
			else{ // case: no
				flag = true;
				break;
			}
	}

	if (flag) 
		cout << "NO" << "\n";
	else 
		for (vector<char>::iterator i = step.begin(); i < step.end(); i++) 
			cout << *i << "\n";
		
}