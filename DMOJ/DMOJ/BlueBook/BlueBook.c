#include <stdio.h>

int arr[6] = {0};
int main() {
	int temp = 0;
	while (temp != -1) {
		scanf("%d", &temp);
		if (temp != -1) {
			if (temp < 10000)
				arr[0]++;
			else if (temp < 20000)
				arr[1]++;
			else if (temp < 30000)
				arr[2]++;
			else if (temp < 40000)
				arr[3]++;
			else if (temp < 50000)
				arr[4]++;
			else if (temp <= 1000000)
				arr[5]++;
		}
	}
	for (int i = 0; i < 6; i++)
		printf("%d\n", arr[i]);
}
