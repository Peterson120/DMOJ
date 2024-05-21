#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, num = 0;
	scan(N);
	for (int i = 0; i < N / 5 + 1; i++)
		if ((N - 5 * i) % 4 == 0)
			num++;
	printf("%d\n", num);
}
