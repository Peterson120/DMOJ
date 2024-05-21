#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, mass[1000001]; scan(N); scan(mass[1]);
	for (int i = 2; i <= N; i++) {
	    scan(mass[i]);
		mass[i] += mass[i-1];
	}
	scan(N);
	while (N--) {
		int a, b; scan(a); scan(b);
		printf("%d\n", mass[b+1] - mass[a]);
	}
}
