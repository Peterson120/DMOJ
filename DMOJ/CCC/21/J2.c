#include <stdio.h>
#include <string.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	short n, max = -1, t; scan(n); char name[20], win[20];
	while (n--) {
		scanf("%s", name); scan(t);
		if (t > max) {
			max = t;
			memcpy(win, name, 20*sizeof(char));
		}
	}
	printf("%s\n", win);
	return 0;
}
