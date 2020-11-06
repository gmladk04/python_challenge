#include <iostream>
#include <vector>
using namespace std;

vector<int> vt;
int op_count[4];
int n;

long minn = 1000000000;
long maxx= -1000000000;

void backtracking(int num, int count) {

	if (count < n) {
		for (int i = 0; i < 4; i++) 
			if (op_count[i]) {
				op_count[i] -= 1;
				switch (i) {
				case 0:
					backtracking(num + vt[count],count+1);
					break;
				case 1:
					backtracking(num - vt[count], count + 1);
					break;
				case 2:
					backtracking(num * vt[count], count + 1);
					break;
				case 3:
					backtracking(num / vt[count], count + 1);
					break;
				}
				op_count[i] += 1;
			}
	}
	else { //final
		if (num > maxx)
			maxx = num;
		if (num < minn)
			minn = num;
	}
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		vt.push_back(num);
	}

	for (int i = 0; i < 4; i++)
		cin >> op_count[i];

	backtracking(vt[0],1);

	cout << maxx << "\n";
	cout << minn << "\n";

}