#include <stdio.h>
#include <algorithm>

int arr[100000], totals[100000];
int main() {
	int N, K, Q;
	scanf("%d%d%d%d", &N, &K, &Q, &arr[0]);
	totals[0] = arr[0];
	for (int i = 1; i < N; i++) {
		scanf("%d", &arr[i]);
		totals[i] = totals[i-1] + arr[i];
	}
	while (--Q >= 0) {
		int a, b, x, y;
		scanf("%d%d%d%d", &a, &b, &x, &y);

		if (totals[y-1] - totals[x-2] > K)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
