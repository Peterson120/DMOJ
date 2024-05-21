#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool arr[10001];
int main() {
	arr[0] = arr[1] = 1;
	for (int i = 4; i <= 10000; i+=2)
		arr[i] = 1;
	for (int i = 3; i*i <= 10000; i+=2)
		if (!arr[i])
			for (int j = i*i; j <= 10000; j+=i)
				arr[j] = 1;
	for (int z = 0; z < 5; z++) { 
		int x, n=0, f=2; scan(x);
		while (f <= x) {
			n+=x/f;
			f<<=1;
		}
		printf("%d^%d", 2, n);
		for (int i = 3; i <= x; i+=2) {
			if (!arr[i]) {
				f=i;
				n=0;
				while (f <= x) {
					n+=x/f;
					f*=i;
				}
				printf(" * %d^%d", i, n);
			}
		}
		putchar('\n');
	}
	return 0;
}
