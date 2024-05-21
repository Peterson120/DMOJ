#include <stdio.h>

char str[81];
int main() {
	int length, rm, i = 0, j = 0;
	scanf("%d", &length);
	while (i++ < length) {
		scanf("%d", &rm);
		fgets(str, 81, stdin);
		printf("%d ", i);
		while (str[j] != '\n') {
			if(j != rm)
				putchar(str[j]);
			j++;
		}
		putchar('\n');
	}
	return 0;
}
