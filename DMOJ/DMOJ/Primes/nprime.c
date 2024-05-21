#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool isPrime(int n) {
	if (n <= 1 || n == 4)  return 0;
	else if (n <= 3) return 1;
	else if (!(n&1)) return 0;
	for (int i = 3; i*i < n; i+=2) if (n%i==0) return 0;
	return 1;
}
int main() {
	int N; scan(N);
	for (int i = N; ; i++) if (isPrime(i)) {printf("%d\n", i); return 0;}
	return 0;
}
