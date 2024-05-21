#include <stdio.h>
#define ull unsigned long long
int fact(int z);
int main() {
	ull n, r; int K;
	scanf("%llu%llu%d",&n,&r,&K);
	n%=K; r%=K;
	printf("%llu\n", ((ull)fact(n) / ((ull)fact(r) * fact(n - r)))%K);
}
int fact(int z) {
	ull f = 1;
	if (z == 0)
		return(f);
	else
		for (int i = 1; i <= z; i++)
			f = f * i;
	return(f);
}
