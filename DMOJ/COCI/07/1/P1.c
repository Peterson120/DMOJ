#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int arr[3][2], x, y;
	scan(arr[0][0]);
	scan(arr[0][1]);
	scan(arr[1][0]);
	scan(arr[1][1]);
	if (arr[0][0] == arr[1][0]) {
		x = arr[0][0];
	}
	else if (arr[0][0] == arr[2][0]) {
		x = arr[0][0];
	}
	else {
		x = arr[1][0];
	}
	for (int i = 0; i < 3; i++) {
		scan(arr[i][0]);
		scan(arr[i][1]);
	}
	printf("%d %d", arr[0][0] == arr[1][0] ? arr[2][0] : arr[0][0] == arr[2][0] ? arr[1][0] : arr[0][0], arr[0][1] == arr[1][1] ? arr[2][1] : arr[0][1] == arr[2][1] ? arr[1][1] : arr[0][1]);
	return 0;
}

