#include <stdio.h>
#include <math.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	while (1) {
		int R; scan(R);
		if (!R) return 0;
		int total = 0;
		for (int x = 1; x <= R; x++) total += (int) sqrt(R * R - x * x);
		printf("%d\n", ((total + R) << 2) + 1);
	}
}
