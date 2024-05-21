#include <stdio.h>
#include <string.h>
char str[7];
long long totals[2], amount = 0;
int main() {
	int N, index = 0;
	scanf("%d%6s%lld", &N, str, &amount);
	totals[0] = strcmp("return", str) == 0 ? -amount : amount;
	if (totals[0] > totals[1]) {
		index = 1;
		totals[1] = totals[0];
	}
	for (int i = 1; i < N; i++) {
		scanf("%6s%lld", str, &amount);
		if (strcmp(str, "borrow") == 0)
			totals[0] += amount; 
		else if (strcmp(str, "return") == 0)
			totals[0] -= amount;
		if (totals[0] > totals[1]) {
			index = i + 1;
			totals[1] = totals[0];
		}
	}
	printf("%d\n", index);
}
