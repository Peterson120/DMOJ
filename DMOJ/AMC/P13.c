#include <stdio.h>
#define ull unsigned long long
int main() {
	ull N, M;
	int K;
	scanf("%llu%llu%d", &N, &M, &K);
	// N!/M!(N-M)!
	ull a = 1, b = 1;
	for (ull i = M+1; i <= N; i++)
		a *= i;
	for (ull i = 2; i <= N-M; i++)
		b*=i;
	printf("%llu\n", a/b%K);
	return 0;
}
