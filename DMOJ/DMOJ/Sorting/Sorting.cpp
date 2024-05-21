#include <stdio.h>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, arr[100]; scan(N);
	for (int i = 0; i < N; ++i) scan(arr[i]);
	std::sort(arr, arr + N, [](int a, int b) {return a > b;});
	while (N--) printf("%d\n", arr[N]);
}
