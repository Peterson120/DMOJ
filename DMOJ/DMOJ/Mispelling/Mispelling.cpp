#include <cstdio>
#include <string.h>
char str[81];
int main() {
	int N, M;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d ", &M);
		fgets(str, 81, stdin);
		memmove(str + M - 1, str + M, (strlen(str) - M + 1)*sizeof(char));
		printf("%d %s", i, str);
	}
}
