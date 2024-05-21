#include <iostream>
#include <string>
std::string arr[2000];
bool col[2000], row[2000];
int main() {
	int N, M, R, C; scanf("%d%d%d%d", &N, &M, &R, &C);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			scanf(" %c", &arr[i][j]);
			if (j > M >> 1) if (arr[i][j] != arr[i][M-j]) row[i] = 1;
		}
	
	return 0;
}
