#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define size 500001
int arr[10][size];
int main() {
	int N, Q; scan(N); scan(Q);
	for (int i = 1; i <= N; i++) {
		int t; scan(t); t--;
		arr[t][i]++;
	}

	for (int i = 0; i < 10; i++)
		for (int j = 1; j <= N; j++)
			arr[i][j] += arr[i][j-1];
	
	while (Q--) {
		int a, b; scan(a); scan(b); a--;
		for (int i = 9; i >= 0; i--) {
			if (arr[i][a] || arr[i][N]-arr[i][b]) {
				printf("%d %d\n", i+1, arr[i][N]-arr[i][b]+arr[i][a]);
				break;
			}
		}
	}
	return 0;
}
