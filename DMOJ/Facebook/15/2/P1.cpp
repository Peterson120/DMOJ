#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[50000];
int sort(int low, int high, int i) {
	int min = arr[i], max = min;
	while (low <= high) {
		if (arr[low] == min-1) min = arr[low++];
		else if (arr[high] == min-1) min = arr[high--];
		else if (arr[low] == max+1) max = arr[low++];
		else if (arr[high] == max+1) max = arr[high--];
		else return 0;
	}
	return 1;
}
int main() {
	int T; scan(T);
	for (int z = 1; z <= T; z++) {
		int N; scan(N);
		for (int i = 0; i < N; i++) {
			int x; scan(x);
			arr[i] = x;
		}
		printf("Case #%d: %s\n", z, sort(1, N-1, 0) || sort(0, N-2, N-1) ? "yes" : "no");
	}
}
