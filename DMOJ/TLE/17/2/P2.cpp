#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[1000000];
int main() {
	int K; scan(K);
	for (int i = 0; i < K; i++) {
		int t; scan(t);
		arr[t-1]++;
	}
	for (int i = 1; i < 1000000; i++) arr[i] += arr[i-1];
	int N; scan(N);
	while (N--) {
		int t; scan(t);
		printf("%d\n", t-arr[t-1]);
	}
	return 0;
}
