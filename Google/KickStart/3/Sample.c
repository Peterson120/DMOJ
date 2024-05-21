#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int T; scan(T); 
	for (int i = 1; i <= T; i++) {
		int N, M, C = 0; scan(N); scan(M);
		while (N--) {
			int t; scan(t);
			C += t;
		}
		printf("Case #%d: %d\n", i, C%M);
	}
	return 0;
}
