#include <stdio.h>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int a[200000], b[200000];
int main() {
	int N, M, min = 1000000000; scan(N); scan(M);
	for (int i = 0; i < N; i++) scan(a[i]);
	for (int i = 0; i < M; i++) scan(b[i]);
	std::sort(a, a+N);
	std::sort(b, b+M);
	int i = 0, j = 0;
	while (i < N && j < M) {
		min = std::min(min, std::abs(a[i]-b[j]));
		if (a[i] < b[j]) i++;
		else j++;
	}
	printf("%d\n", min);
	return 0;
}
