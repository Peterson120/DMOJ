#include <stdio.h>
#include <unordered_map>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
struct hash {size_t operator()(const std::pair<int, int> &x) const {return x.first ^ x.second;}};
std::unordered_map<std::pair<int, int>, std::unordered_map<char, std::pair<int, int>>, hash> m;

std::pair<int, int> getNeighbour(int r, int c, char i) {
	auto it = m.find({r, c});
	if (it != m.end() && (*it).second.find(i) != (*it).second.end()) return (*it).second[i];
	if (i == 'N') return {r-1, c};
	else if (i == 'S') return {r+1, c};
	else if (i == 'E') return {r, c+1};
	else return {r, c-1};
}

void link_neighbours(int r, int c) {
	std::pair<int, int> n = getNeighbour(r, c, 'N'),
	s = getNeighbour(r, c, 'S'),
	e = getNeighbour(r, c, 'E'),
	w = getNeighbour(r, c, 'W');
	m[n]['S'] = s;
	m[s]['N'] = n;
	m[e]['W'] = w;
	m[w]['E'] = e;
}

int main() {
	int T; scan(T);
	for (int i = 1; i <= T; i++) {
		int N, R, C, SR, SC; scan(N); scan(R); scan(C); scan(SR); scan(SC);
		while (N--) {
			char c = getchar();
			link_neighbours(SR, SC);
			std::pair<int, int> p = getNeighbour(SR, SC, c);
			SR = p.first;
			SC = p.second;
		}
		printf("Case #%d: %d %d\n", i, SR, SC);
		m.clear();
	}
	return 0;
}
