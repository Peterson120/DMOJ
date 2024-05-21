#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[200000];
int main() {
	int T; scan(T);
	for (int z = 0; z < T; z++) {
		int N, days = 0, max = -1; scan(N);
		for (int i = 0; i < N; i++) scan(arr[i]);
		for (int i = 0; i < N; i++) {
			int second = i+1 < N ? arr[i] > arr[i+1] : 1;
			if (arr[i] > max && second) ++days;
			if (arr[i] > max) max = arr[i];
		}
		printf("Case #%d: %d\n", z+1, days);
	}
	return 0;
}
