#include <stdio.h>

char ans[10000];
int main() {
	int N, corr = 0;
	char a;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %c", &a);
		ans[i] = a;
	}

	for (int i = 0; i < N; i++) {
		scanf(" %c", &a);
		if (a == ans[i]) 
			corr++;
	}
	printf("%d\n", corr);
}
