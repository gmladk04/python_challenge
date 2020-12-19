#include <iostream>
#define N 1000
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int ans[N+1][2] = { 0, };
	int index = 0;

	int num;
	cin >> num;

	ans[index][0] = num;
	ans[index++][1] = 1;
	
	for (int i = 1; i < n; i++) {
		int num;
		cin >> num;

		bool flag = true;

		for (int j = 0; j < index; j++) {
			if (ans[j][0] < num) {
				ans[j][0] = num;
				ans[j][1]++;
				flag = false;
			}
		}

		if (flag) {
			ans[index][0] = num;
			ans[index++][1] = 1;
		}
	}
	

	int maxx = -1;
	for (int i = 0; i < index; i++) {
		if (ans[i][1] > maxx)
			maxx = ans[i][1];
	}

	cout << maxx << "\n";
}