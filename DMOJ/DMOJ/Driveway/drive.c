#include <stdio.h>
#include <string.h>
char arr[100005][51];
int main() {
	int T, M, i = 0, f = 0; scanf("%d%d", &T, &M);
	while (T--) {
		char X[51], t[4]; scanf("%50s%3s", X, t);
		if (!strcmp(t, "in")) {memcpy(arr[i], X, sizeof(X)*sizeof(char)); i++;}
		else {
			if (!strcmp(arr[i], X)) {arr[i][0] = '\0'; i--;}
			else if (M > 0 && !strcmp(arr[f], X)) {f++; M--;}
		}
	}
	for (; f < i; f++)
		printf("%s\n", arr[f]);
}
