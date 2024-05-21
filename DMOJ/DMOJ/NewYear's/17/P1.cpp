#include <cstdio>
#include <deque>
#include <unordered_map>
struct pair {
	int val, index;
	explicit pair(int a, int b) : val(a), index(b){};
};
int main() {
	int Q; scanf("%d", &Q);
	std::deque<pair> d; std::unordered_map<int, int> m;
	while (Q--) {
		char c; int s; scanf(" %c %d", &c, &s);
		if (c == 'F') {
			d.push_front(pair(s, Q));
			m[s] = Q;
		} else if (c == 'E') {
			d.push_back(pair(s, Q));
			m[s] = Q;
		} else m[s] = -1;
	}
	while (!d.empty()) {
		if (m[d.front().val] == d.front().index)
			printf("%d\n", d.front().val);
		d.pop_front();
	}
	return 0;
}
