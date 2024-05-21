#include <iostream>
#include <unordered_map>
#include <string>
std::unordered_map<std::string, int> cycle = {{"Ox", 0}, {"Tiger", 1}, {"Rabbit", 2}, {"Dragon", 3}, {"Snake", 4}, {"Horse", 5}, {"Goat", 6}, {"Monkey", 7}, {"Rooster", 8}, {"Dog", 9}, {"Pig", 10}, {"Rat", 11}}; 
std::unordered_map<std::string, int> m;
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int N; std::cin >> N;
	m["Bessie"] = 2016;
	while (N--) {
		std::string name, name2, zodiac, np, t; std::cin >> name >> t >> t >> np >> zodiac >> t >> t >> name2;
		m[name] = m[name2];
		int diff = cycle[zodiac] - m[name2]%12;
		m[name] += diff;
		if (np == "next") {
			if (diff <= 0) m[name] += 12;
		} else {
			if (diff >= 0) m[name] -= 12;
		}
	}
	std::cout << (m["Bessie"]>m["Elsie"]?m["Bessie"]-m["Elsie"]:m["Elsie"]-m["Bessie"]) << '\n';
	return 0;
}
