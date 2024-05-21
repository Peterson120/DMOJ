#include <stdio.h>
#include <math.h>
int main() {
	float v[100];
	int size; scanf("%d", &size);
	for (int i = 0; i < size; i++) scanf("%f", &v[i]);
	while (1) {
		int n; scanf("%d", &n);
		if (n == 77) break;
		else if (n == 99) {
		    int s; float f; scanf("%d%f", &s, &f);
			for (int i = size-1; i >= s-1; i--) v[i+1] = v[i];
			v[s] = v[s-1]*(100-f)/100;
			v[s-1] *= f/100;
			size++;
		} else if (n == 88) {
		    int s; scanf("%d", &s);
			v[s-1] += v[s];
			for (; s < size-1; s++) v[s] = v[s+1];
			size--;
		}
	}
	for (int i = 0; i < size; i++) printf("%d ", (int)round(v[i]));
	putchar('\n');
}
