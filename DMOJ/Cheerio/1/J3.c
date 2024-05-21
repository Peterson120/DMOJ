#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int col[1500];
int main() {
	int n; scan(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (getchar() == 'S') col[j]++;
		getchar();
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			if (n - col[j] <= i) putchar('S');
			else putchar('.');
		putchar('\n');
	}
	return 0;
}
