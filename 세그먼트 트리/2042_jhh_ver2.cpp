#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

long long tree[3000000];
int b = 1;

void update(int x, long long diff) {
	x += b;
	tree[x] += diff;
	while (x > 1) {
		tree[x / 2] += diff;
		x /= 2;
	}
}
long long sum(int l, int r) {
	l += b;
	r += b;
	long long ans = 0;
	while (l < r) {
		if (l % 2 == 0) l /= 2;
		else {
			ans += tree[l];
			l += 1;
			l /= 2;
		}
		if (r % 2 == 1) r /= 2;
		else {
			ans += tree[r];
			r -= 1;
			r /= 2;
		}
	}
	if (l == r) ans += tree[l];
	return ans;
}
int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	m += k;
	while (b <= n) b *= 2;
	b -= 1;
	for (int i = 1; i <= n; i++) {
		long long x;
		scanf("lld", &x);
		update(i, x);
	}
	while (m--) {
		int t1;
		scanf("%d", &t1);
		if (t1 == 1) {
			int t2;
			long long t3;
			scanf("%d %lld", &t2, &t3);
			update(t2, t3 - tree[b + t2]);
			//printf("%lld\n", sum(t2, t3));
		}
		else if (t1 == 2) {
			int t2, t3;
			scanf("%d %d", &t2, &t3);
			printf("%lld\n", sum(t2, t3));
		}
	}
	return 0;
}
