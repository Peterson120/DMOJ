#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> list = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	for (int z = 0; z < 5; z++) {
		std::string out;
		std::cin >> out;
		for (auto &i : list)
			if (i.find(out) == std::string::npos)
				std::cout << i << '\n';
	}
	return 0;
}
