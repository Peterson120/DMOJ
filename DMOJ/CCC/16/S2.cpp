#include <stdio.h>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int q; scan(q);
	int N; scan(N);
	int arr[100], arr2[100];
	for (int i = 0; i < N; i++) scan(arr[i]);
	for (int i = 0; i < N; i++) scan(arr2[i]);
	std::sort(arr, arr+N);
	std::sort(arr2, arr2+N);
	int r = 0;
	if (q == 1) for (int i = 0; i < N; i++) r += std::max(arr[i], arr2[i]);
	else for (int i = 0; i < N; i++) r += std::max(arr[i], arr2[N-i-1]);
	printf("%d\n", r);
	return 0;
}
