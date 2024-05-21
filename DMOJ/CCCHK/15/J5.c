#include <stdio.h>

int main() {
	int N, arr[1000], M;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < (M << 1); i += 2)
		scanf("%d%d", &arr[i], &arr[i+1]);
}
