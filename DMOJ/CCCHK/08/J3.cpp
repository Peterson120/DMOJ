#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>
std::unordered_map<int, std::pair<int, std::string>> names;
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL); std::cout.tie(NULL);
	int N, D, phone, max;
	std::cin >> N;
	while (N--) {
		std::string name;
		std::cin >> name >> phone;
		names[phone] = std::make_pair(0, name);
	}
	std::cin >> D;
	while (D--) {
		std::cin >> phone;
		names[phone].first++;
		if (names[phone].first > names[max].first)
			max = phone;
		else if (names[phone].first == names[max].first)
			max = phone < max ? phone : max;
	}
	std::cout << names[max].second << '\n';
	return 0;
}
