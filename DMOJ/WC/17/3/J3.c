#include <stdio.h>
int main() {
	char c;
	int nums = 0, low = 0, up = 0;
	while ((c=getchar_unlocked()) != 10) {
		if (c >= 'a' && c <= 'z') low++;
		else if ( c >= 'A' && c <= 'Z') up++;
		else if (c >= '0' && c <= '9') nums++;
		else break;
	}
	printf(low+up+nums >= 8 && low+up+nums <= 12 && low >= 3 && up >= 2 && nums >= 1 ? "Valid\n" : "Invalid\n");
	return 0;
}
