#include <stdio.h>
#include <string.h>

char shirt[20], pants[20];

int main() {
	fgets(shirt, 20, stdin);
	fgets(pants, 20, stdin);
	shirt[strlen(shirt)-1] = '\0';
	pants[strlen(pants)-1] = '\0';

	if ((strcmp(shirt, "red") == 0 || strcmp(shirt, "green") == 0 || strcmp(shirt, "white") == 0) && (strcmp(pants, "red") == 0 || strcmp(pants, "green") == 0 || strcmp(pants, "white") == 0))
		printf("Jingle Bells\n");
	else
		printf("Boring...\n");
}
