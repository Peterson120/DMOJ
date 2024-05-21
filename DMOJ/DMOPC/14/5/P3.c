#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, last, curr, longest = 1, current = 1;
	scanf("%d %d", &N, &last);
	for (int i = 1; i < N; i++) {
		scanf("%d", &curr);
		if (abs(curr - last) <= 2) {
			current++;
		} else {
			longest = current > longest ? current : longest;
			current = 1;
		}
		last = curr;
	}
	printf("%d\n", current > longest ? current : longest);
}
