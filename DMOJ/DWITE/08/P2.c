#include <stdio.h>

char word[256];
int count() {
	int wordc = 0, letter = 0;
	fgets(word, 255, stdin);
	for (char *j = &word[0]; *j != '\0'; j++) {
		if (*j == ' ') {
			if (letter >= 4)
				wordc ++;
			letter = 0;
		} else if ((int) *j >= (int)'A' && (int) *j <= (int)'z')
			letter ++;
		else if (*j == '\'')
			letter = -255;
	}
	if (letter >= 4)
		wordc ++;
	return wordc;
}
int main() {
	for (int i = 0; i < 5; i++)
		printf("%d\n", count());
}
