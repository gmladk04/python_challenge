#include <iostream>
using namespace std;

int n;
int minn=100000000;
int count_t = 0;
int score[20][20];
bool team[20] = { false };

void backtracking(int num) {
	if (num < n && count_t < int(n/2)) {
		team[num] = true;
		count_t++;
		backtracking(num + 1);
		team[num] = false;
		count_t--;

		backtracking(num + 1);
	}
	else if(count_t == int(n/2)){
		int s_start = 0;
		int s_link = 0;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (team[i] && team[j])
					s_start +=score[i][j];
				else if (!(team[i] || team[j]))
					s_link += score[i][j];

		if (minn > abs(s_start - s_link))
			minn = abs(s_start - s_link);
	}
}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> score[i][j];

	backtracking(0);

	cout << minn << "\n";
}