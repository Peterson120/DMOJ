#include <cstdio>
#include <cmath>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	while (1) {
		int R;
		scan(R); 								// Fast Input
		if (!R) return 0;						// If R matches end condition, terminate program
		int total = 0;
		for (int x = 1; x <= R; x++) {			// Loop along x axis from 1 -> Radius
			int y = (int) sqrt(R * R - x * x);	// Distance between two points from origin (0,0), All integer coordinates within the circle
			total += y;							// Add the number of lattice points from y = 0 to edge of circle
		}
		total = ((total + R) << 2) + 1;			// Multiply by 4 for each quadrant
		printf("%d\n", total);					// Print answer
	}
}
