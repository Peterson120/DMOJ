#include <stdio.h>
int time[] = {1, 2, 3, 4};
int arithmetic() {
	int diff2 = time[2] - time[1];
	if (time[0] == 0) return time[3] - time[2] == diff2 ? 1 : 0;
	else return time[3] - time[2] == diff2 && diff2 == time[1] - time[0] ? 1 : 0;
}
void check() {
	time[3]++;
	if (time[3] == 10) {
		time[3] = 0;
		time[2]++;
	}
	if (time[2] == 6) {
		time[2] = 0;
		time[1]++;
	}
	if (time[0] == 1 && time[1] == 3) {
		time[0] = 0;
		time[1] = 1;
	} else if(time[1] == 10) {
		time[0] = 1;
		time[1] = 0;
	}
}
int main() {
	int len;
	scanf("%d", &len);
	int result = 0;
	if (len > 720) {
		result += len / 720 * 31;
		len %= 720;
	}
	len = len > 672 ? len - 82 : len - 34;
	for (int i = 0; i <= len; i++) {
		if(arithmetic()) result++;
		check();
	}
	printf("%d\n", result);
}
