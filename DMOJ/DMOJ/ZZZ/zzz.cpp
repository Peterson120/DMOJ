#include <cstdio>
int main() {
	char c; int count = 0;
	while ((c=getchar()) != '\n')
		if (c == 'z' || c == 'Z') count++;
	printf(count >= 3 ? "YES\n" : "NO\n");
	return 0;
}
