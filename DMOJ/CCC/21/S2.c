#include <stdio.h>
#include <stdbool.h>
#define max 5000000
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool arr[2][max];
int main() {
	int n, m, q; scan(n); scan(m); scan(q);
	while (q--) {
		char c=getchar_unlocked(); int t; scan(t); t--;
		arr[c=='C'][t] ^= 1;
	}
	int r = 0, c = 0;
	for (int i = 0; i < n; i++) r += arr[0][i];
	for (int i = 0; i < m; i++) c += arr[1][i];
	printf("%d\n", n*c+r*m-(r*c<<1));
	return 0;
}
