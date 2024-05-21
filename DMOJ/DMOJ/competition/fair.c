#include <stdio.h>

int nums[75] = {0};
int sum(int N) {
	int total = 0;
	for (int i = 74; i >= 0; i--) {
		if (total + nums[i] <= N)
			total += nums[i];
		else 
			return total;
	}
	return total;
}

int main() {
	int N, M, num;
	scanf("%d%d", &M, &N);

	for (int i = 0; i < M; i++) {
		scanf("%d", &num);
		nums[num-1]++; 
	}
	printf("%d\n", sum(N));
}
