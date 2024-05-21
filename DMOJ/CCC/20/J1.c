#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	short sum = 0;
	for (short i = 1; i < 4; i++) {
		short t; scan(t);
		sum += t * i;
	}
	printf(sum >= 10 ? "happy\n" : "sad\n");
	return 0;
}

