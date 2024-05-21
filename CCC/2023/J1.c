#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int P, C;
	scan(P); scan(C);
	printf("%d", 50*P-10*C+(P>C?500:0));
	return 0;
}

