#include <cstdio>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	for (int i = 1; i < N; i++) printf("%d ", i);
	printf("%d\n", N);
	return 0;
}
