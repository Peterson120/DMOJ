#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define max 10000001
int arr[max];
int main() {
	for (int i = 2; i < max; i++) if (!arr[i]) for (int j = i; j < max; j+=i) arr[j]++;
	int Q; scan(Q);
	for (int j = 1; j <= Q; j++) {
		int c = 0, a, b, k; scan(a); scan(b); scan(k);
		for (int i = a; i <= b; i++) c += arr[i]==k;
		printf("Case #%d: %d\n", j, c);
	}
	return 0;
}
