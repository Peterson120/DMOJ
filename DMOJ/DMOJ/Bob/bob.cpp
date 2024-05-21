#include <cstdio>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int main() {
	int N, Q, p, r;
	scan(N);
	scan(Q);
	for (int i = 0; i < N; i++)
		scan(arr[i]);
	std::sort(arr, arr+N);
	while (--Q >= 0) {
		scan(p);
		scan(r);
		printf("%d\n", (int)(std::lower_bound(arr,arr+N,r+1)-std::lower_bound(arr,arr+N,p)));
	}
}
