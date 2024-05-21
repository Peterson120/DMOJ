#include <stdio.h>

char str[100002];
int main() {
	int S;
	scanf("%d", &S);

	for (int i = 0; i < S; i ++) {
		scanf("%c", str[i]);
	}
	memmove(&str[idxToDel], &str[idxToDel + 1], strlen(str) - idxToDel);
}
