#include <stdio.h>
#include <stdlib.h>

int arr[100];

int comp(const void *a, const void *b) {
	return *(int *)a > *(int *)b ? -1 : 1;
}

int main() {
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), comp);
	while (--N >= 0)
		printf("%d\n", arr[N]);
}
