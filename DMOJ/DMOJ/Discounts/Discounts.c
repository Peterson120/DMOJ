#include <stdio.h>

int main() {
	long long T, c;
	int N, nums = 0, d;
	scanf("%d%lld", &N, &T);
	T *= 100;
	for (int i = 0; i < N; i++) {
		scanf("%lld%d", &c, &d);
		if (c * (100 - d) <= T)
			nums++;
	}
	printf("%d\n", nums);
}
