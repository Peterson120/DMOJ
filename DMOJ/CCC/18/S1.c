#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cmp(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}
int main() {
	int N, arr[100]; double min = 2e9;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), cmp);
	for (int i = 1; i < N - 1; i++)
		min = fmin(min, abs(arr[i+1] - arr[i-1])/2.0);
	printf("%0.1f\n", min);
	return 0;
}
