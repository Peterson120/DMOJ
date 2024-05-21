#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[10000000];
int main() {
	int N, end = 0; scan(N);
	for (int i = 0; i < N; i++) {
		int a, b; scan(a); scan(b);
		arr[a-1]++;
		arr[b-1]--;
		if (b-1 > end)
			end = b-1;
	}
	int o = arr[0];
	for (int i = 1; i < end; i++) {
		arr[i] += arr[i-1];
		if (arr[i] > o)
			o = arr[i];
	}
	printf("%d\n", o);
	return 0;
}
