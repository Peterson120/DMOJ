#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int main() {
	int N, max = 0, s = 0; scan(N); scan(arr[0]);
	for (int i = 1; i < N; i++) {
		scan(arr[i]);
		arr[i] += arr[i-1];
	}
	for (int i = 0; i < N; i++) {
		int t; scan(t); s += t;
		if (s == arr[i]) max = i+1;
	}
	printf("%d", max);
	return 0;
}
