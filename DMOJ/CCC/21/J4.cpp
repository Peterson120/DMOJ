#include <stdio.h>
char arr[500001];
int main() {
	int L = 0, M = 0, i = 0;
	while ((arr[i] = getchar()) != 10) {
		if (arr[i] == 'L') 		L++;
		else if (arr[i] == 'M') M++;
		i++;
	}
	int mis = 0, mis2[] = {0, 0};
	for (i = 0; i < L; i++) {
		if (arr[i] != 'L') {
			if (arr[i] == 'M') mis2[0]++;
			mis++;
		}
	}
	for (i = L; i < L+M; i++) {
		if (arr[i] != 'M') {
			if (arr[i] == 'L') mis2[1]++;
			mis++;
		}
	}
	printf("%d\n", mis - (mis2[0] < mis2[1] ? mis2[0] : mis2[1]));
}
