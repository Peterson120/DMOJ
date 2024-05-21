#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
short arr[100000];
int main() {
	int N, M; scan(N); scan(M);
	for (int i = 0; i < M; i++) {
		int a, b; scan(a); scan(b);
		arr[a-1]++;
		arr[b]--;
	}
	int num = arr[0] % 2;
	for (int i = 1; i < N; i++) {
		arr[i] += arr[i-1];
		if (arr[i] % 2)
			num ++;
	}
	printf("%d\n", num);
	return 0;
}
