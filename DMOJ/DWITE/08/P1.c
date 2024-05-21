#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		int x, y, X, Y;
		scanf("%d%d", &X, &Y);
		x = 50;
		y = 25;
		while (x < 100 && x > 0 && y > 0 && y < 50) {
			x += X;
			y += Y;
		}
		printf("%d,%d\n", x, y);
	}
}
