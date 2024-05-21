#include <stdio.h>
int main() {
	char c; short pair = 0, skip = 0;
	while ((c=getchar()) != 10) {
		if (c == '(') pair ++;
		else pair --;
		if (pair < 0) {
			if (skip) {
				printf("NO\n");
				return 0;
			} else {
				skip = 1;
				pair += 2;
			}
		}
	}
	printf((!skip && pair == 2) || !pair ? "YES\n" : "NO\n");
	return 0;
}
