#include <stdio.h>

char first[1002];
char second[1002];
int main() {
	int T, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%1001s", first);
		scanf("%1001s", second);
		for (int j = N - 1; j >= 0; j--) {
			printf("%c", second[j]);
			printf("%c", first[j]);
		}
		printf("\n");
	}
}
