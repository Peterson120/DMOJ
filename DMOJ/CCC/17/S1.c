#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, arr[100000]; scan(N); scan(arr[0]);
	for (int i = 1; i < N; i++) {
		scan(arr[i]);
		arr[i] += arr[i - 1];
	}
	int day = -1, t = 0;
	for (int i = 0; i < N; i++) {
		int x; scan(x);
		t += x;
		if (t == arr[i]) day = i;
	}
	printf("%d\n", day+1);
	return 0;
}
