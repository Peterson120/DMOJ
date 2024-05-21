#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool arr[100000];
int main() {
	int N, M; scan(N); scan(M);
	for (int i = 0; i < M; i++) {
		int a, b; scan(a); scan(b);
		arr[a-1]^=1;
		arr[b]^=1;
	}
	int num = arr[0]; bool curr = arr[0];
	for (int i = 1; i < N; i++) {
		curr ^= arr[i];
		arr[i] = curr;
		num += curr;
	}
	printf("%d\n", num);
	return 0;
}
