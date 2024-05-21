#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007
int arr[100001];

int comp(const void *a, const void *b) {
	return (*(long long int *) a - *(long long int *) b);
}

int main() {
	int N = 0, M = 0, i = 0;
	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), comp);

	long long int T = 0;
	int j = N;
	for (i = 0; i < N; i++) {
		while (j && arr[j - 1] > M - arr[i]) 
			j--;
		T += j < i ? j : i;
	}
	printf("%lld\n", T % MOD);
}
