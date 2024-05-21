#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int n, max = 0; scan(n);
	while (n--) {
		int sum = 0; char c;
		while ((c = getchar_unlocked()) != 10)
			if ((c-'0')&1) sum += c - '0';
		if (sum > max) max = sum;
	}
	printf("%d\n", max);
	return 0;
}
