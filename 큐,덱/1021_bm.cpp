#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	deque<int> dq;
	
	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	int count = 0;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;

		bool rflag = false;
		int ls = 0;
		int rs = 0;

		for (; ls < dq.size(); ls++)
			if (dq[ls] == num) 
				break;

		for (; rs < dq.size(); rs++)
			if (dq[dq.size() -1 - rs] == num) {
				rflag = true;
				break;
			}
		
		if (rs+1 <ls) {
			for (int j = 0; j < ls; j++) {
				dq.push_front(dq[dq.size() - 1]);
				dq.pop_back();
			}
			dq.pop_back();
			count += 1 + rs;
		}
		else {
			for (int j = 0; j < ls; j++) {
				dq.push_back(dq[0]);
				dq.pop_front();
			}
			dq.pop_front();
			count += ls;
		}
	}

	cout << count << "\n";
	
}