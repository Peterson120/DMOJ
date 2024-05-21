#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int gcd(int a, int b) {
	int t = b;
	b = a;
	a = t;
	while (b > 0) {
		t = b;
		b = a%t;
		a = t;
	}
	return a;
}
int main() {
	int a, b; scan(a); scan(b);
	printf("%lld\n", (long long)a*b/gcd(a,b));
	return 0;
}
