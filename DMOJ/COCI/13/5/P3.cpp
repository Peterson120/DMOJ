#include <cstdio>
#include <cstring>
#include <stack>
char str1[1000001], str2[37];
int arr1[1000000], arr2[1000000], len1, len2;
int main() {
	scanf("%s%s", str1, str2);
	len1 = strlen(str1), len2 = strlen(str2);
	if (len1 == 1) {
		for (int i = 0; i < len1; i++) {
			if (str1[i] == str2[0]) {
				arr1[i]++; arr2[i]++;
			}
		}
	} else {
		std::stack<int> s;
	}
	if (1) printf("FRULA\n");
	else printf("%s\n", str1);
}
