#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

int arr[9];
bool arr2[100];
void print(int a, int b) {
	}
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		scan(arr[i]);
		arr2[arr[i]] = 1;
		sum += arr[i];
	}
	for (int i = 0; i < 9; i++) {
		int find = sum - arr[i] - 100;
		if (arr2[find]) {
			for (int j = 0; j < 9; j++)
				if (arr[j] != find && j != i) printf("%d\n", arr[j]);
			break;
		}
	}
	return 0;
}
