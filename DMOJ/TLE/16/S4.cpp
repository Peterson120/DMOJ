#include <stdio.h>
#include <vector>
#include <utility>
int arr[1501];
std::vector<std::pair<int, int>> list;

void swap(int i1, int i2) {
	int temp = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = temp;
}

int main() {
	int N, swaps = 0;
	scanf("%d%d", &N, &arr[0]);
	for (int i = 1; i < N; i++) {
		scanf("%d", &arr[i]);
		for (int j = 0; j < (int)(sizeof(arr)/sizeof(int)); j++)
			if (arr[j] < arr[j-1] && arr[j] != j && arr[j-1] != j-1) {
				swap(j, j-1);
				list.push_back(std::make_pair(j, j-1));
				swaps++;
			}
	}
	for (int i = 1; i < N; i++)
		if (arr[i] < arr[i-1]) {
			printf("Give up\n");
			return 0;
		}

	printf("%d\n", swaps);
	for (auto i : list)
		printf("%d %d\n", i.first, i.second);
}
