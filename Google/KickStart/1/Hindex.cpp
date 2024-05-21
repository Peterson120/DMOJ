#include <stdio.h>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int T; scan(T);
	for (int z = 1; z <= T; z++) {
		int C, h=0, c=0; scan(C);
		std::vector<int> cit(C+1);
		printf("Case #%d:", z);
		for (int i = 0; i < C; i++) {
			int t; scan(t);
			if (t > h) {
				cit[t<C?t:C]++;
				if (c == cit[h]) {
					h++;
					c = 0;
				} else c++;
			}
			printf(" %d", h);
		}
		putchar('\n');
	}
	return 0;
}
