#include <iostream>
#include <string>
#include <unordered_set>
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int N, M; std::cin >> N >> M;
	std::unordered_set<std::string> done;
	while (N--) {
		std::string t; std::cin >> t;
		done.insert(t);
	}
	int num = 0;
	while (M--) {
		int T; bool c = true; std::cin >> T;
		while (T--) {
			std::string t; std::cin >> t;
			if (!done.count(t))
				c = false;
		}
		num += c;
	}
	std::cout << num << '\n';
	return 0;
}
