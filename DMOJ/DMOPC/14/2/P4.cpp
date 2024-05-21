#include <iostream>
int mass[1000001];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N; std::cin >> N >> mass[1];
	for (int i = 2; i <= N; i++) {
		std::cin >> mass[i];
		mass[i] += mass[i-1];
	}
	std::cin >> N;
	while (N--) {
		int a, b; std::cin >> a >> b;
		std::cout << mass[b+1]-mass[a] << '\n';
	}
	return 0;
}
