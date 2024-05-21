#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <utility>
std::unordered_map<std::string, int> m;
std::pair<int, int> arr[100000];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	int T, N;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::string s;
		std::cin >> s;
		m[s] = i;
	}
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::string s;
		std::cin >> s;
		arr[i] = std::make_pair(m[s], i+1);
	}
	std::sort(arr, arr + N);
	for (int i = 0; i < N; i++)
		std::cout << arr[i].second << '\n';
}
