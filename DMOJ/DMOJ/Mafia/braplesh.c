#include <stdio.h>

int main() {
	long long K, a, b;
	int N, sum = 0;
	scanf("%d%lld", &N, &K);
	while (--N >= 0) {
		scanf("%lld%lld", &a, &b);
		sum = (sum + a * b) % K;
	}
	printf("%d\n", sum);
}
