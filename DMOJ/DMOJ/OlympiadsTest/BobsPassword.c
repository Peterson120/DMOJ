#include <stdio.h>
#include <string.h>
char str[5];
int main() {
	scanf("%s", str);
	printf((strstr("7890123456789012", str) == NULL && !(str[0] == str[1] && str[1] == str[2] && str[2] == str[3])) ? "strong\n" : "weak\n");
	return 0;
}
