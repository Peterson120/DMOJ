#include <stdio.h>
#include <vector>
#include <stdlib.h>

void swap(std::vector<int>& S, int i, int j) {
	std::swap(S[j], S[i]);
}

long long count_swaps(std::vector<int> S) {
	int num_swaps = 0;
	for (int i = 0; i < (int) S.size() - 1; i++) {
		for (int j = 0; j < (int) S.size() - 1; j++) {
			if (std::abs(S[j]) > std::abs(S[j + 1])) {
				swap(S, j, j + 1);
				num_swaps++;
			}
		}
	}

	for (int i = 0; i < 4; i+=2) {
		if (S[i] > S[i + 1]) {
			swap(S, i, i + 1);
			num_swaps++;
		}
	}
	return num_swaps;
}

int main() {
	int length = 4;
	int arr[] = {2, 1, -1, -2};
	std::vector<int> v;
	for (int i = 0; i < length; i++) {
		v.push_back(arr[i]);
	}
	printf("%lld\n", count_swaps(v));
	for (int i = 0; i < (int) v.size(); i++)
		printf("%d ", v[i]);
	printf("\n");
}
