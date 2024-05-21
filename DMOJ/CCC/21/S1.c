#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[10001];
int main() {
	int N; double tot = 0; scan(N);
	for (int i = 0; i <= N; i++) scan(arr[i]);
	for (int i = 1; i <= N; i++) {
		int t; scan(t);
		tot += t/2.0*(arr[i]+arr[i-1]);
	}
	printf("%.7f\n", tot);
	return 0;
}
