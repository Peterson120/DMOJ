#include <stdio.h>
#include <string.h>
char arr[1000001];
int main() {
	int nums[] = {0,0,0}, n;
	scanf("%1000000s", arr);
	n = strlen(arr);
	for (int i = 0; i < n; i++) {
		if (arr[i] == 'A')
			nums[0]++;
		else if (arr[i] == 'B')
			nums[1]++;
		else if (arr[i] == 'C')
			nums[2]++;
	}
	
	printf("%s", arr);
}
