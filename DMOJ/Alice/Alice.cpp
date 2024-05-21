#include <cstdio>
#include <algorithm>
#include <cmath>
int main() {
	int T, N, arr[50000];
	scanf("%d%d", &T, &N);
	arr[0] = 0;
	for (int i = 1; i <= N; i++)
		scanf("%d", &arr[i]);
	std::sort(arr, arr+N+1, [](int a, int b) {if (-a == b) return a < 0; return std::abs(a) < std::abs(b);});
	long long total = 0; int count = 0;
	for (int i = 1; i < N; i++) {
		if (i < N-1 && std::abs(arr[i+1]) == std::abs(arr[i]) && std::abs(arr[i+1] - arr[i-1]) < std::abs(arr[i] - arr[i-1]))
			std::swap(arr[i], arr[i+1]);
		if (total + std::abs(arr[i] - arr[i-1]) < T) {
			total += std::abs(arr[i] - arr[i-1]);
			count ++;
		} else break;
	}
	printf("%d\n", count);
}
