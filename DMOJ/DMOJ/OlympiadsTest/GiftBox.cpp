#include <stdio.h>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int a[100000], b[100000];
int main() {
	int N; scan(N);
	for (int i = 0; i < N; i++) scan(a[i]);
	for (int i = 0; i < N; i++) scan(b[i]);
	std::sort(a, a+N);
	std::sort(b, b+N);
	int cnt = 0;
	for (int i = 0, j = 0; i < N && j < N;) {
		if (a[i] > b[j]) j++;
		else {
			cnt++;
			j++;
			i++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
