#include <stdio.h>
#define ll long long
#define mod 1000000007 
int main() {
	int N;	
	scanf("%d", &N);
	unsigned ll sum = 0, times = 1;
	for (int i = 0; i < N; i++) {
	    int x;
		scanf("%d", &x);
		sum += x;
		sum %= mod;
		if (i > 0) {
			times >>= 1;
			times %= mod;
		}
	}
	printf("%llu\n", sum*times%mod);
	return 0;
}
