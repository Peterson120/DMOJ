#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, high=0, sec, highi=0, seci=0; scan(N);
	for (int i = 0; i < N; i++) {
		int t; scan(t);
		if (t > high) {
			sec = high;
			seci = highi;
			high = t;
			highi = i;
		} else if (t > sec) {
			sec = t;
			seci = i;
		}
	}
	printf("%d\n", seci+1);
	return 0;
}
