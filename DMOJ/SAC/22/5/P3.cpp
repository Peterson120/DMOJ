#include <iostream>
#include <string>
#include <unordered_set>
std::unordered_set<std::string> s[400000];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N, Q, num, i; std::string name;
	std::cin >> N >> Q;
	while (Q--) {
		std::cin >> num >> i >> name;
		i--;
		if (num == 1)
			std::cout << (s[i].find(name) != s[i].end() ? "1" : "0") << '\n';
		else if (num == 2)
			s[i].insert(name);
	}
}
