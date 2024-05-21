#include <stdio.h>
#include <stdlib.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int comp(const void *a, const void *b) {
	return (*(int*)a) - (*(int*)b);
}

int main() {
	int N;
	scan(N);
	for (int i = 0; i < N; i++)
		scan(arr[i]);
	qsort(arr, N, sizeof(int), comp);
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return 0;
}
