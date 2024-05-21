#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N, total = 0; scan(N);
	while (N--) {
		char c = getchar();
		switch (c) {
			case 'P': total += 1500; break;
			case 'M': total += 6000; break;
			case 'S': total += 15500; break;
			case 'C': total += 40000; break;
			case 'T': total += 75000; break;
			case 'H': total += 125000; break;
		}
		while (c != '\n') c = getchar();
	}
	printf("%d", total);
	return 0;
}

