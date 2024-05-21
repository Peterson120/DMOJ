#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	short B; scan(B);
	printf("%d\n%d\n", 5*B-400, B == 100 ? 0 : B > 100 ? -1 : 1);
	return 0;
}
