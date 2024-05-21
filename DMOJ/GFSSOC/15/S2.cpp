#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
std::vector<std::pair<std::string, int>> v;
std::vector<std::vector<std::string>> v2;
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int N, T; std::cin >> N >> T;
	while (N--) {
		std::string s; int n; std::cin >> s >> n;
		if (n < T-1)
			v.push_back(std::make_pair(s, n));
	}
	for (int i = 0; i < v.size(); i++)
		for (int j = 0; j < i; j++)
			for (int z = 0; z < j; z++)
				if (v[i].second + v[j].second + v[z].second <= T) {
					std::string l[3] = {v[i].first, v[j].first, v[z].first};
					std::sort(l, l + 3);
					v2.push_back({l[0], l[1], l[2]});
				}
	std::sort(v2.begin(), v2.end());
	for (int i = 0; i < v2.size(); i++)
		std::cout << v2[i][0] << ' ' << v2[i][1] << ' ' << v2[i][2] << '\n';
	return 0;
}
