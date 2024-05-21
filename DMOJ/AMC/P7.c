#include <stdio.h>
#include <math.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	unsigned long long N, sum = 0; scan(N);
	unsigned long long root = sqrt(N); // Account for N/N
	for (int i = 1; i <= root; i++)
		sum += N/i;	// Number of numbers with factors of i
	printf("%llu\n", 2*sum-root*root);
	return 0;
}
