#include <stdio.h>
#include <string.h>

char code[56];
char result[56];

int main() {
	for (int i = 0; i < 6; i++) {
		char type;
		scanf(" %c", &type);
		fflush(stdin);
		fgets(code, 50, stdin);
		if (type == 'D') {
			for (int j = 0; j < strlen(code); j++) {
				result[j*5%25] = code[j];
			}
		} else {
			int len = strlen(code) - 1 + strlen(code) % 5;
			for (int j = strlen(code) - 1; j < len; j++)
				code[j] = ' ';
			code[len + 1] = '\0';
			for (int col = 0; col < strlen(code)/5; col++) {
				for (int row = 0; row < 5; row++)
					result[5*row+col] = code[5*col+row];
			}
		}
		printf("%s\n", result);
	}
}
