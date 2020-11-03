#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
	int n;
	cin >> n;
	vector<int> v;
	vector<int>::iterator iv;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		iv = find(v.begin(), v.end(),num);

		if (iv != v.end())
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
		
}