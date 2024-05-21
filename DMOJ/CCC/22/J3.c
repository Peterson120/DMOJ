#include <stdio.h>
#include <stdbool.h>
int main() {
	bool num = 0; char c;
	while ((c=getchar_unlocked())!='\n') {
		if (num && c > '9') {putchar_unlocked(10); putchar_unlocked(c); num = 0;}
		else if (c == '-') {printf(" loosen "); num = 1;}
		else if (c == '+') {printf(" tighten "); num = 1;}
		else putchar_unlocked(c);
	}
	return 0;
}
