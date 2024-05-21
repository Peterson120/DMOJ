#include <stdio.h>

int main() {
	int n, a, b, c;
	scanf("%d", &n);
	while (n-- > 0) {
		scanf("%d %d %d", &a, &b, &c);
		printf(a * b == c ? "POSSIBLE DOUBLE SIGMA\n" : "16 BIT S/W ONLY\n");
	}
}
