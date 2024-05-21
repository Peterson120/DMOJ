#include <stdio.h>

int main() {
	int N = 0, i = 0, k = 0;
	scanf("%d", &N);
	int arr[N];
	while (i < N)
		scanf("%d", &arr[i++]);

	for (int j = 0; j < N; j++){
		for (i = 0; i < N - 1; i++)
			if (arr[i] > arr[i + 1]) {
				for (k = 0; k < N; k++)
					printf("%d ", arr[k]);
				putchar('\n');

				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
	}
	for (k = 0; k < N; k++)
		printf("%d ", arr[k]);
	putchar('\n');	
}
