#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
int arr[100];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	int N; double min = 2000000000;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];
	std::sort(arr, arr + N);
	for (int i = 1; i < N - 1; i++)
		min = std::min(min, std::abs((arr[i+1] - arr[i]) + (arr[i] - arr[i-1]))/2.0);
	std::cout << std::fixed << std::setprecision(1) << min << '\n';
	return 0;
}
