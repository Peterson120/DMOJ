#include <bits/stdc++.h>
struct pair {
	int in, cost;
	pair(int a, int b) : in(a), cost(b){};
};
struct comp {
	bool operator()(const pair& l, const pair&r) {
		return l.cost > r.cost;
	}
};
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(nullptr);
	int T; std::cin >> T;
	while (T--) {
		std::unordered_map<std::string, std::priority_queue<pair, std::vector<pair>, comp>> m;
		int N; std::cin >> N;
		while (N--) {
			int M; std::cin >> M;
			while (M--) {
				std::string s; int amount, cost; std::cin >> s >> amount >> cost;
				m[s].push(pair(cost, amount));
			}
		}
		int K, cost = 0; std::cin >> K;
		while (K--) {
			std::string s; int amount; std::cin >> s >> amount;
			while (amount > 0) {
				int min = std::min(amount, m[s].top().in);
				cost += min * m[s].top().cost;
				amount -= min;
				m[s].pop();
			}
		}
		std::cout << cost << '\n';
	}
}
