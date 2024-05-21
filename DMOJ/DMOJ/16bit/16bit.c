#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int n; scan(n);
	while (n--) {
		int a, b; long long c; scan(a); scan(b); scan(c);
		printf((long long)a*b != c ? "16 BIT S/W ONLY\n" : "POSSIBLE DOUBLE SIGMA\n");
	}
	return 0;
}
