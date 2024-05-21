#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int a, b;
	scan(a);
	scan(b);
	if (b <= a)
		printf("Congratulations, you are within the speed limit!\n");
	else if (b <= a+20)
		printf("You are speeding and your fine is $100.\n");
	else if (b <= a+30)
		printf("You are speeding and your fine is $270.\n");
	else
		printf("You are speeding and your fine is $500.\n");
	return 0;
}
