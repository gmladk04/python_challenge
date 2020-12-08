#include <iostream>
#include <cstring>
#define N 50

using namespace std;

int main() {
	char st[N];

	scanf("%s", st);

	int len = strlen(st);

	int sum = 0;
	int num = 0;

	bool minus_flag = false;

	for (int i = 0; i < len; i++) {
		if ('0' <= st[i] && st[i] <= '9') {
			num *= 10;
			num += int(st[i] - '0');
		}
		else {
			if (minus_flag)
				sum -= num;
			else
				sum += num;

			num = 0;

			if (st[i] == '-')
				minus_flag = true;
		}
	}

	if (minus_flag)
		sum -= num;
	else
		sum += num;

	printf("%d\n", sum);
}