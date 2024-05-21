#include <stdio.h>
#include <math.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int prime(int a) {
	if (a == 2 || a == 3) return 1;
	if (a % 2 == 0 || a % 3 == 0) return 0;
	for (int i = 4; i <= sqrt(a); i++)
		if (!(a % i))
			return 0;
	return 1;
}
int main() {
	int T; scan(T);
	while (T--) {
		int N; scan(N);
		for (int i = 2; i <= N; i++) {
			if (prime(i) && prime(N+(N-i))) {
				printf("%d %d\n", i, N+N-i);
				break;
			}
		}
	}
	return 0;
}
