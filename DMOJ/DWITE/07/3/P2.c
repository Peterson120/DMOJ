#include <stdio.h>
char str[100005];
int main() {
	for (int _ = 0; _ < 5; _++) {
		int i = 0;
		fgets(str, 100005, stdin);
		while (str[i] != '\n') {
			if (str[i] == '"' || str[i] == '\'') {
				char c = str[i];
				i++;
				while (str[i] != c) {
					putchar(str[i]);
					i++;
				}
				if (str[i+1] != '\n') putchar(' ');
			} else if (str[i] == '/') {
				i++;
				if (str[i] == '*') {
					i++;
					while (!(str[i] == '*' && str[i+1] == '/')) {
						putchar(str[i]);
						i++;
					}
					i++;
					if (str[i+1] != '\n') putchar(' ');
				} else if (str[i] == '/') {
					i++;
					while (str[i] != '\n') {
						putchar(str[i]);
						i++;
					}
					i--;
				}
			}
			i++;
		}
		putchar('\n');
	}
}
