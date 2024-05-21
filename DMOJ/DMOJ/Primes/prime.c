#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool isPrime(int n) {
	if (n < 2) return 0;
	else if (n < 4) return 1;
	else if (n == 4) return 0;
	for (int i = 2; i*i <= n; i++)
		if (!(n%i)) return 0;
	return 1;
}
int main() {
	int n, i=3; scan(n);
	printf("2\n");
	while (n > 1) {
		if (isPrime(i)) {
			printf("%d\n", i);
			n--;
		}
		i+=2;
	}
	return 0;
}
