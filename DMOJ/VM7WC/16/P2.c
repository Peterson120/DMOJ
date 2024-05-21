#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100001];
int main() {
	char c; int len = 1;
	while ((c=getchar()) != '\n') {
		if (c == 'G') arr[len]++;
		len++;
	}
	for (int i = 1; i <= len; i++) arr[i] += arr[i-1];
	int Q; scan(Q);
	while (Q--) {
		int l, r; scan(l); scan(r);
		printf("%d\n", arr[r+1]-arr[l]);
	}
	return 0;
}

