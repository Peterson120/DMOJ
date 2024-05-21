#include <cstdio>
#include <algorithm>
std::pair<int, int> arr[100000];
int main() {
	int N; scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int T, X;
		scanf("%d%d", &T, &X);
		arr[i] = {T, X};
	}
	std::sort(arr, arr+N, [](const std::pair<int, int> &a, const std::pair<int, int> &b) {return a.first < b.first;});
	double max = 0;
	for (int i = 1; i < N; i++)
		max = std::max(max, std::abs((double)(arr[i].second - arr[i-1].second) / (double)(arr[i].first - arr[i-1].first)));
	printf("%0.1f\n", max);
	return 0;
}
