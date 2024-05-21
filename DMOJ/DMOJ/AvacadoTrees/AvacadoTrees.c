#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int a[1000000];
int main() {
	int N, Q, H; scan(N); scan(Q); scan(H);
	for (int i = 1; i <= N; i++) {
		int t; scan(t);
		if (t > H) {
			while (getchar() != '\n');
			a[i] = a[i-1];
		} else {
			scan(a[i]);
			a[i] += a[i-1];
		}
	}
	int max = 0;
	while (Q--) {
		int l, r; scan(l); scan(r);
		int tmp = a[r]-a[l-1];
		if (tmp > max) max = tmp;
	}
	printf("%d\n", max);
	return 0;
}
