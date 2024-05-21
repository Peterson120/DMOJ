#include <iostream>
#include <string>
#include <deque>
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int T, M;
	std::cin >> T >> M;
	std::deque<std::string> q;
	while (T--) {
		std::string X, t;
		std::cin >> X >> t;
		if (t == "in") q.push_back(X);
		else {
			if (M > 0 && q.front() == X) {
				q.pop_front();
				M--;
			} else if (q.back() == X)
				q.pop_back();
		}
	}
	for (std::string i : q)
		std::cout << i << '\n';
}
