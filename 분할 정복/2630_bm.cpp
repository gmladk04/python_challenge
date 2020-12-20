#include <iostream>
#define N 128
using namespace std;

int blue = 0;
int white = 0;
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
		int rs = size / 2;
		check_m(x, y, rs);
		check_m(x + rs, y , rs);
		check_m(x , y + rs, rs);
		check_m(x + rs, y + rs, rs);
	}
	else {
		if (base)
			blue++;
		else
			white++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n ;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	check_m(0, 0, n);

	cout << white << "\n" << blue << "\n";
}