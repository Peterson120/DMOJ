#include <stdio.h>

int main() {
	int T, N, max, curr;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%d", &max);
		for (int j = 1; j < N; j++) {
			scanf("%d", &curr);
			max = curr > max ? curr : max;
		}
		printf("%d\n", max);
	}
}
