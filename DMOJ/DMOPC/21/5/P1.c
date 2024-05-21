#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	if (N == 1) putchar('1');
	else if (N < 5) printf("-1");
	else if (N > 4) {
		int i;
	    printf("2 ");
		for (i = 6; i <= N; i+=2) printf("%d ", i);
		printf("4 5 1 3");
		if (N > 6) putchar(' ');
		for (i = 7; i <= N-2; i+=2) printf("%d ", i);
		if (i <= N) printf("%d", i);
	}
	putchar('\n');
	return 0;
}
