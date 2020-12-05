#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cout.tie(NULL);
	cin.tie(NULL);
	
	int m;
	cin >> m;

	int set[21] = { 0, };
	
	for (int i = 0; i < m; i++) {
		string ins;

		cin >> ins;

		if (ins == "all")
			fill_n(set, 21, 1);
		else if (ins == "empty") 
			fill_n(set, 21, 0);
		else{
			int num;
			cin >> num;

			if (ins == "add") {
				set[num] = 1;
			}
			else if (ins == "remove") {
				set[num] = 0;
			}
			else if (ins == "check") {
				if (set[num])
					cout << 1 << "\n";
				else
					cout << 0 << "\n";
			}
			else if (ins == "toggle") {
				set[num] = !set[num];
			}
		}
	}
}