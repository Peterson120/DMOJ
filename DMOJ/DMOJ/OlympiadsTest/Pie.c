#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
double arr[30];
int main() {
	int N, M; double r=1; scan(N); scan(M);
	while (M--) {
		int p, a; scan(p); scan(a);
		p--;
		arr[p] += r*(a/100.0);
		r = r-r*(a/100.0);
	}
	for (int i = 0; i < N; i++)
		printf("%.6f\n", arr[i]);
	return 0;
}
