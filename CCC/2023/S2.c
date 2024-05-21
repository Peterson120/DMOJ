#include <stdio.h>
#include <stdlib.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	int vals[N+1], arr[N+1][N+1];
	for (int i = 0; i <= N; ++i)
		for (int j = 0; j <= N; ++j)
			arr[i][j] = 0;
	for (int i = 1; i <= N; ++i) scan(vals[i]);
	for (int len = 1; len <= N; ++len) {
		int min = 2147483647, l = 1, r = len;
		for (;r <= N; ++r, ++l)
			arr[l][r] = arr[l+1][r-1] + abs(vals[l]-vals[r]),
			min = arr[l][r] < min ? arr[l][r] : min;
		printf("%d ", min);
	}
	return 0;
}
