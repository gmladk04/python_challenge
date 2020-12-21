#include <iostream>
#define N 2187
using namespace std;

int c_1 = 0;
int c_m1 = 0;
int c_0 = 0;
int arr[N][N] = { 0, };

void check_m(int x, int y, int size) {

	int base = arr[x][y];
	bool fail = false;
	for (int i = x; i < x + size; i++)
		for (int j = y; j < y + size; j++)
			if (arr[i][j] != base) {
				fail = true;
				break;
			}

	if (fail) {
		int rs = size / 3;
		check_m(x, y, rs);
		check_m(x + rs, y, rs);
		check_m(x, y + rs, rs);

		check_m(x + rs, y + rs, rs); 
		check_m(x, y + rs * 2, rs);
		check_m(x + rs, y + rs * 2, rs);

		check_m(x + rs*2, y, rs);
		check_m(x + rs*2, y + rs, rs);
		check_m(x + rs*2, y + rs*2, rs);
	}
	else {
		switch (base) {
		case 1:
			c_1++;
			break;
		case 0:
			c_0++;
			break;
		case -1:
			c_m1++;
			break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	check_m(0, 0, n);

	cout << c_m1 << "\n" << c_0 << "\n" << c_1 << "\n";
}