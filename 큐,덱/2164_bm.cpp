#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n;
	cin >> n;
	deque<int> dq;

	for (int i = 1; i <=n; i++) 
		dq.push_back(i);

	int flag = 0;
	while (dq.size() > 1) {
		int num = dq[0];
		dq.pop_front();

		if (flag)
			dq.push_back(num);

		flag = !flag;
	}
	
	cout << dq[0] << "\n";
}