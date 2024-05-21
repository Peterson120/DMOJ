#include <iostream>
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N, arr[100000]; std::cin >> N >> arr[0];
	for (int i = 1; i < N; i++) {
		std::cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int day = -1, t = 0;
	for (int i = 0; i < N; i++) {
		int x; std::cin >> x;
		t += x;
		if (t == arr[i])
			day = i;
	}
	std::cout << day+1 << '\n';
	return 0;
}
