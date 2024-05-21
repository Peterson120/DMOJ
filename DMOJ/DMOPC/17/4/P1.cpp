#include <cstdio>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100002];
int main() {
	int N, Q; scan(N); scan(Q);
	while (Q--) {
		int x, y; scan(x); scan(y);
		arr[x]++;
		arr[y]--;
	}
	int cnt = arr[0] > 0;
	for (int i = 1; i < N; i++) {
		arr[i] += arr[i-1];
		if (arr[i]) cnt++;
	}
	printf("%d %d\n", N-cnt, cnt);
	return 0;
}
