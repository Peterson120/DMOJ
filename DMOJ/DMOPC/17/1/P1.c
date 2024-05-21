#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool xc[1000];
bool yc[1000];
int main() {
	int R, C, Q;
	scan(R);
	scan(C);
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			char l;
			scanf(" %c", &l);
			if (l == 'X') {
				xc[j] = true;
				yc[i] = true;
			}
		}
	}
	scan(Q);
	while (--Q >= 0) {
		scan(R);
		scan(C);
		puts(xc[R-1] || yc[C-1] ? "Y" : "N");
	}
}
