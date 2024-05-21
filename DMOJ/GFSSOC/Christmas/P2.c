#include <stdio.h>

int main() {
	int N, tall, small, num;
	scanf("%d%d", &N, &tall);
	small = tall;
	for (int i = 1; i < N; i++) {
		scanf("%d", &num);
		if (num > tall)
			tall = num;
		else if (num < small)
			small = num;
	}
	printf("%d\n%d\n", small, tall);
}
