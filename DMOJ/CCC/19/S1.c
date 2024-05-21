#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool v = 0, h = 0;
int main() {
	char c;
	while ((c = getchar()) != '\n') {
		if (c == 'V') v ^= 1;
		else h ^= 1;
	}
	if (!v && !h) printf("1 2\n3 4\n");
	else if (v && !h) printf("2 1\n4 3\n");
	else if (!v && h) printf("3 4\n1 2\n");
	else printf("4 3\n2 1\n");
	return 0;
}
