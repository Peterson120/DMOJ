#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
short arr[10001][10001];
int main() {
	int n, m; scan(n); scan(m);
	while (m--) {
		int x, y, w, h; scan(x); scan(y); scan(w); scan(h);
		arr[x][y]++;
		arr[x+w][y+h]++;
		arr[x][y+h]--;
		arr[x+w][y]--;
	}
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n; j++)
			arr[i][j] += arr[i][j-1];
	int w = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < n; j++) {
			arr[i][j] += arr[i-1][j];
			if (arr[i][j] % 2) w++;
		}
	for (int i = 0; i < n; i++) if (arr[0][i] %2) w++;
	printf("%d\n", w);
	return 0;
}
