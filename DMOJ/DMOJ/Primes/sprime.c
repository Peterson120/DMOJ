#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int psa[100001];
bool arr[100001];
int main() {
	int Q; scan(Q);
	arr[0] = arr[1] = 1;
	arr[2] = 0;
	for (int i = 4; i <= 100000; i+=2)
		arr[i] = 1;
	for (int i = 3; i*i <= 100000; i+=2)
		if (!arr[i])
			for (int j = i*i; j <= 100000; j+=i)
				arr[j] = 1;
	for (int i = 2; i <= 100000; i++)
		psa[i] += psa[i-1] + (!arr[i]) * i;
	while (Q--) {
		int a, b; scan(a); scan(b);
		printf("%d\n", psa[b]-psa[a-1]);
	}
	return 0;
}
