#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int t; scan(t);
	while (t--) {
		int a, b; scan(a); scan(b);
		printf((a == 1) || (b == 1 && a < 7) || (b < 4 && a < 4) ? "bad\n" : "good\n");
	}
	return 0;
}
