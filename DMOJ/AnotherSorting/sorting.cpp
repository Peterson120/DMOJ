#include <cstdio>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, arr[1000000];
	scan(N);
	for (int i = 0; i < N; i++) 
		scan(arr[i]);
	std::sort(arr, arr+N, [](int a, int b) {if (a % 10 == b % 10) return a > b; return a % 10 < b % 10;});
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	putchar('\n');
	return 0;
}

