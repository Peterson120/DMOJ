#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int W, C;
	scan(W);
	scan(C);
	if (W == 3 && C >= 95)
		printf("C.C. is absolutely satisfied with her pizza.\n");
	else if (W == 1 && C <= 50)
		printf("C.C. is fairly satisfied with her pizza.\n");
	else
		printf("C.C. is very satisfied with her pizza.\n");
}
