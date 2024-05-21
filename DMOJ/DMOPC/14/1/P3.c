#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

int main() {
	int size; float total = 0;
	scan(size);
	for (int i = 0; i < size; i++) {
		int sum; scan(sum);
		total += sum;
	}

	int len; scan(len);
	for (int i = size+1; i <= len+size; i++) {
		int t; scan(t);
		total += t;
		printf("%.3f\n", total / i);
	}
	return 0;
}
