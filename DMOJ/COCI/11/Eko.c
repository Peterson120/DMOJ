#include <stdio.h>
#include <stdlib.h>

int *trees = NULL;

int binSearch(int size, int r, long long val) {
	int l = 0;
	while (l <= r) {
		int mid = l + (r - l) / 2, i = size;
		long long wood = 0;
		while (i-- >= 0) 
			wood += trees[i] - mid < 0 ? 0 : trees[i] - mid;

		if (wood == val)
			return mid;
		else if (wood > val)
			l = mid + 1;
		else if (wood < val)
			r = mid - 1;
	}
	return l - 1;
}

int main() {
	int N, high = 0;
	long long M;
	scanf("%d %lli", &N, &M);

	trees = (int *) malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		scanf("%d", &trees[i]);
		if (trees[i] > high)
			high = trees[i];
	}
	printf("%d\n", binSearch(N, high, M));
	free(trees);
	return 0;
}
