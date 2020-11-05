#include <iostream>
#include <list>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	list<int> l;
	list <int>::iterator li;

	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) 
		l.push_back(i);

	li = l.begin();

	for (int i = 0; i < k-1; i++) {
		if (li == l.end())
			li = l.begin();
		li++;
	}
	
	cout << "<";

	while (l.size() > 1) {
		cout << *li << ", ";
		li = l.erase(li);

		for (int i = 0; i < k-1; i++) {
			if (li == l.end())
				li = l.begin();
			li++;
			if (li == l.end())
				li = l.begin();
		}
	}

	cout << *li << ">" << "\n";
}