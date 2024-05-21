#include <stdio.h>
#include <stdlib.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int cmp(const void* a, const void* b) {return (*(int*)a)-(*(int*)b);}
int main() {
	int N, K; scan(N); scan(K);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), cmp);
	int sum = 0;
	for (int i = N-1; i >= 0 && K > 0; i--)
		if (arr[i] > 0) {
			sum += arr[i];
			K--;
		}
	printf("%d", sum);
	return 0;
}
