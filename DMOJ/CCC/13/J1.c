#include <stdio.h>
int main() {
	int low = 0, mid = 0;
	scanf("%d%d", &low, &mid);
	printf("%d\n", mid + (mid - low));
	return 0;
}
