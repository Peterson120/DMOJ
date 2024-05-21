#include <cstdio>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100], arr2[100][100], sort, R, C;
int main() {
	scan(R); scan(C);
	for (int i = 0; i < R; i++) {
		arr[i] = i;
		for(int j = 0; j < C; j++)
			scan(arr2[i][j]);
	}
	int N; scan(N);
	for (int i = 0; i < N; i++) {
		scan(sort); sort--;
		std::stable_sort(arr, arr+R, [](int a, int b) {return arr2[a][sort] < arr2[b][sort];});
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++)
			printf("%d ", arr2[arr[i]][j]);
		putchar('\n');
	}
}
