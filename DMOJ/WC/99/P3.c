#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int points = 30000;
float randomize() {return (float) rand() / (float) RAND_MAX;}

int main() {
	while (1) {
		float L; int under = 0;
		scanf("%f", &L);
		if (L == -1) return 0;
		for (int i = 0; i < points; i++) {
			float x = randomize() * L, y = randomize();
			if (y <= exp(-pow(x, 2))) under++;
		}
		printf("%.2f\n", L * under / points);
	}
}
