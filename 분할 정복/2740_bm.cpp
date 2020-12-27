#include <iostream>
#define N 100
using namespace std;

int matrixA[N][N];
int matrixB[N][N];
int matrixRet[N][N];

void m(int aColumn, int aRow, int bColumn, int bRow) {

	for (int i = 0; i < aColumn; i++) {
		for (int j = 0; j < bRow; j++) {
			for (int k = 0; k < aRow; k++) {
				matrixRet[i][j] += matrixA[i][k] * matrixB[k][j];
			}
			cout << matrixRet[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int aN, aM, bN, bM;
	cin >> aN >> aM;
	for (int column = 0; column < aN; column++)
		for (int row = 0; row < aM; row++)
			cin >> matrixA[column][row];

	cin >> bN >> bM;
	for (int column = 0; column < bN; column++)
		for (int row = 0; row < bM; row++)
			cin >> matrixB[column][row];

	m(aN, aM, bN, bM);

}