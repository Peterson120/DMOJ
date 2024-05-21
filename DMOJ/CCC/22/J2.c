#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, star = 0; bool forty = true;
	scan(N);
	while (N--) {
		int p, f;
		scan(p);
		scan(f);
		if (p * 5 - f * 3 > 40)
			star++;
		else
			forty = false;
	}
	printf(forty ? "%d+\n" : "%d\n", star);
	return 0;
}
