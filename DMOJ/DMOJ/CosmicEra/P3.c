#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int main() {
	int I, N, J, l = 0; scan(I); scan(N); scan(J);
	for (int i = 0; i < J; i++) {
		int a, b, c; scan(a); scan(b); scan(c);
		arr[a-1] += c;
		arr[b] -= c;
	}
	l+=arr[0]<N;
	for (int i = 1; i < I; i++) {
		arr[i] += arr[i-1];
		if (arr[i] < N)
			l++;
	}
	printf("%d\n", l);
	return 0;
}
