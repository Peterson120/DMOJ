#include <stdio.h>
char arr[200001];
int main() {
	int N, r = 0;
	scanf("%d", &N);
	scanf("%s", arr);
	char last = ' ';
	for (int i = 0; i < N; i+=2) {
		if (arr[i] != arr[i+1]) {
			if (arr[i] != last) {
				++r;
				last = arr[i];
			}
		}
	}
	if (last == 'H') --r;
	printf("%d\n", r);
}
