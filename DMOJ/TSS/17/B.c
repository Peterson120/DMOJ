#include <stdio.h>
#include <math.h>
int pos[1414215] = {0};
int main() {
	int N, Q, x, y;
	scanf("%d%d", &N, &Q);
	for (int i = 0; i < N; i++) {
		scanf("%d%d", &x, &y);
		int d = ceil(sqrt((long long)x*x+(long long)y*y));
		pos[d]++;
	}
	for (int i = 1; i < 1414215; i++)
		pos[i] += pos[i-1];
	while (--Q >= 0) {
		scanf("%d", &x);
		printf("%d\n", pos[x]);
	}
}
