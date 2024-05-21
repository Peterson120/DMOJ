#include <stdio.h>
#include <ctype.h>
int main() {
	int cnt = 0, i = 0; char c;
	while ((c=getchar_unlocked()) != 10) {
		if (isupper(c) && i%5) {
			cnt += 5-i%5;
			i += 5-i%5;
		}
		i++;
	}
	printf("%d\n", cnt);
	return 0;
}
