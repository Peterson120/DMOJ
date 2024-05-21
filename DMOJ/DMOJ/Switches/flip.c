#include <stdio.h>
char switches[1000001];
int main () {
	int N, count = 0;
	scanf("%d", &N);
	scanf("%1000000s", switches);
	while (--N >= 0)
		if ((switches[N] == '1' && !(count % 2)) || (switches[N] == '0' && count % 2))
			count++;
	printf("%d\n", count);
}
