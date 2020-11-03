#include <iostream>
using namespace std;

int main() {
	long long int f[91];
	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i < 91; i++) 
		f[i] = f[i - 1] + f[i - 2];

	int n;
	cin >> n;

	cout << f[n] << "\n";
	
}