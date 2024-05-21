#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[200000], h = 100000, l = 100000;
int main() {
	int N; scan(N);
	for (int i = 1; i <= N; i++) {
		if (getchar() == '0') arr[h++] = i;
		else arr[--l] = i;
	}
	for (int i = l; i < h; i++) printf("%d\n", arr[i]);
	return 0;
}
