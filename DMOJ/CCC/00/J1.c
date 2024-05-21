#include <stdio.h>

int main() {
	int d, m;
	scanf("%d%d", &d, &m);

	printf("Sun Mon Tue Wed Thr Fri Sat\n");
	if (d != 1) {
		printf("   ");
		for (int i = 1; i < d - 1; i++)
			printf("    ");
	}
	for (int i = 1; i <= m; i++) {
		if ((i + d - 2) > 6 && (i + d - 2) % 7 == 0)
			printf("\n ");
		else if (d == 1 && i == 1)
			printf(" ");
		else
			printf("  ");

		if (i >= 10) 
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
}
