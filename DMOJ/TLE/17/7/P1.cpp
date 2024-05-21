#include <stdio.h>
#include <utility>
std::pair<int, int> arr[1001];

bool checkDistinct(int end) {
	for (int i = 0; i < end; i++) {
		if (arr[end].first == arr[i].first && arr[end].second == arr[i].second)
			return false;
	}
	return true;
}

int main() {
	int N, P, X, Y;
	scanf("%d", &N);
	int distinct = 1;
	arr[0] = std::make_pair(0, 0);
	for (int i = 1; i < N; i++) {
		scanf("%d%d%d", &P, &X, &Y);
		X += arr[P - 1].first;
		Y += arr[P - 1].second;
		arr[i] = std::make_pair(X, Y);
		if (checkDistinct(i))
			distinct++;
	}
	printf("%d\n", distinct);
}
