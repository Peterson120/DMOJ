#include <stdio.h>
#include <stdbool.h>
bool arr[500000][500000] = {false};
int main() {
	int N, M = 0, T;
	scanf("%d%d", &N, &T);
	while (T--) {
		int x, y;
		scanf("%d%d", &x, &y);
		arr[x-1][y-1] = true;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			
		}
	}
	return 0;
}

