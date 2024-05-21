#include <iostream>
#include <algorithm>
#include <string>
std::string arr[10000];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N; std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];
	std::sort(arr, arr+N, [](const std::string &a, const std::string &b) {return a+b > b+a;});
	for (int i = 0; i < N; i++)
		std::cout << arr[i];
	putchar('\n');
	return 0;
}
