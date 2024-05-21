#include <iostream>
#include <unordered_map>
#include <utility>
#include <string>
#include <algorithm>
std::pair<std::string, std::string> same[100000], diff[100000];
std::unordered_map<std::string, int> groups;
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	int n[3];
	std::cin >> n[0];
	for (int i = 0; i < n[0]; i++)
		std::cin >> same[i].first >> same[i].second;
	std::cin >> n[1];
	for (int i = 0; i < n[1]; i++)
		std::cin >> diff[i].first >> diff[i].second;
	std::cin >> n[2];
	for (int i = 1; i <= n[2]; i++) {
		std::string name[3];
		std::cin >> name[0] >> name[1] >> name[2];
		for (std::string &j : name)
			groups[j] = i;
	}
	int v = 0;
	v += std::count_if(same, same + n[0], [](const std::pair<std::string, std::string> &a) {return groups[a.first] != groups[a.second];});
	v += std::count_if(diff, diff + n[1], [](const std::pair<std::string, std::string> &a) {return groups[a.first] != 0 && groups[a.first] == groups[a.second];});
	std::cout << v << '\n';
}
