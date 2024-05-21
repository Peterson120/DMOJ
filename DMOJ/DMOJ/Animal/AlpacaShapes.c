#include <stdio.h>

int main() {
	int S, R;
	scanf("%d%d", &S, &R);
	printf(S*S > R*R*3.14 ? "SQUARE\n" : "CIRCLE\n");
}
