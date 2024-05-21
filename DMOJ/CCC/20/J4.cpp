#include <stdio.h>
#include <stdbool.h>
int a[10000001], str[10000001];
int main() {
	char c; int len = 0;
	a[0] = (int)getchar();
	for (int i = 1; (c=getchar()) != '\n'; i++)
		a[i] += (int)c + a[i-1];
	str[0] = (int)getchar();
	for (int i = 1; (c=getchar()) != '\n'; i++) {
		str[i]+=(int)c+str[i-1];
		len++;
	}
	for (int i = len; a[i] != 0; i++) {
		if (a[i]-a[i-len] == str[len]) {
			printf("yes");
			return 0;
		}
	}
	printf("no");
	return 0;
}
