#include <stdio.h>
#include <string.h>
int main() {
	char arr[6], last[6];
	while (1) {
		scanf("%5s", arr);
		if (strcmp(arr, "99999") == 0)
			break;
		else if (arr[0] == '0' && arr[1] == '0')
			printf("%s %c%c%c\n", last, arr[2], arr[3], arr[4]);
		else if ((arr[0] - '0') % 2 == (arr[1] - '0') % 2) {
			printf("right %c%c%c\n", arr[2], arr[3], arr[4]);
			strcpy(last, "right");
		} else {
			printf("left %c%c%c\n", arr[2], arr[3], arr[4]);
			strcpy(last, "left");
		}
	}
}
