#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		int a, b;
		cin >> a >> b;

		if (!(a || b))
			break;

		if (a < b && b % a == 0)
			cout << "factor" << "\n";
		else if (a > b&& a% b == 0)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";
	}
		
}