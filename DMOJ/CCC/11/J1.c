#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int A, E;
	scan(A);
	scan(E);
	if (A <= 2 && E <= 3)
		printf("GraemeMercurian\n");
	if (A >= 3 && E <= 4)
		printf("TroyMartian\n");
	if (A <= 6 && E >= 2)
		printf("VladSaturnian\n");
	return 0;
}
