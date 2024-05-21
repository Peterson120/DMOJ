#include <cstdio>
int main() {
	unsigned long long c = 0, N;
	scanf("%llu", &N);
	// Use a map and set and backtrace
	for (unsigned long long i = 1; i <= N; i++) {
		int j = 1;
		while (j * j <= i) {
			if (i % j == 0) {
				c++;
				if ((int)(i / j) != j)
					c++;
			}
			j++;
		}
	}
	printf("%llu\n", c);
	return 0;
}