#include <stdio.h>
#include <math.h>

int n;
int count;
int arr[15][2];
int index;

int check_ok(int x,int y) {
	for (int i = 0; i < index; i++)
		if ((x == arr[i][0]) || (y == arr[i][1]) || (abs(x - arr[i][0]) == abs(y - arr[i][1])))
			return 0;

	return 1;
}

void queen(int num) {
	for (int i = 0; i < n; i++)
		if (check_ok(num, i))
			if (num == n - 1)
				count++;
			else {
				arr[index][0] = num;
				arr[index][1] = i;
				index++;
				queen(num + 1);
				index--;
			}
}

int main() {
	index = 0;

	scanf_s("%d", &n);
	queen(0);
	printf("%d", count);
}
