#include <iostream>
using namespace std;

int target[81][2] = { 0, };
int offset = 0;
int sdoku[9][9] = { 0, };

int change(int num) {
	if (num < 3)
		return 0;
	if (num < 6)
		return 3;
	if (num < 9)
		return 6;
}

bool check_sdk(int x, int y, int num) {

	for (int i = 0; i < 9; i++) 
		if (sdoku[x][i] == num || sdoku[i][y] == num)
			return false;

	int sx = change(x);
	int sy = change(y);

	for(int i=0;i<3;i++)
		for (int j = 0; j < 3; j++) 
			if (sdoku[sx+i][sy+j] == num)
				return false;
		
	return true;
}

void print(void) {

	cout << "\n";
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << sdoku[i][j] << ' ';
		}
		cout << "\n";
	}
}

void bt(int n) {

	if (n == offset) {
		print();
		exit(0);
	}

	int x = target[n][0];
	int y = target[n][1];

	for (int i = 1; i < 10; i++) {
		if (check_sdk(x, y, i)) {
			sdoku[x][y] = i;
			bt(n + 1);
		}
	}			

	sdoku[x][y] = 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			int n;

			cin >> n;
			sdoku[i][j] = n;

			if (n == 0) {
				target[offset][0] = i;
				target[offset][1] = j;

				offset++;
			}
		}
			
	bt(0);

}