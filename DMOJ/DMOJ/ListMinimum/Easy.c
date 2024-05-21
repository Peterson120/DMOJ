#include <stdio.h>
extern int start();
int main() {
	int N;scanf("%d", &N);
	printf("%d\n", start(N));
	return 0;
}

