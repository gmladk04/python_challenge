#include <iostream>
#include <cstring>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n ;
	
	for (int i = 0; i < n; i++) {
		string f;
		int size;
		cin >> f >> size;
		
		deque<int> dq;
		string a;
		cin >> a;

		if (size) {
			int sum = 0;
			for (int j = 0; j < a.size(); j++) {
				char c = a.at(j);
				if ('0' <= c && c <= '9') {
					sum *= 10;
					sum += int(a.at(j) - '0');
				}
				else if (c == ',' || c == ']') {
					dq.push_back(sum);
					sum = 0;
				}
			}
		}
		
		bool roll = false;
		bool er_flag = false;

		for (int j = 0; j < f.length(); j++) {

			if(f.at(j) == 'R')
				roll = !roll;
			else if(f.at(j) == 'D'){
				if (dq.empty()) {
					er_flag = true;
					break;
				}
				else 
					if (roll)
						dq.pop_back();
					else
						dq.pop_front();
			}
		}

		if (er_flag)
			cout << "error" << "\n";
		else {
			cout << "[";
			if (roll) 
				for (int j = dq.size()-1; j >=0 ; j--) {
					if (j == dq.size() - 1)
						cout << dq[j];
					else
						cout << "," << dq[j];
				}
			else 
				for (int j = 0; j < dq.size(); j++) {
					if (j)
						cout << "," << dq[j];
					else
						cout << dq[j];
				}
			cout << "]\n";
		}
	}
}