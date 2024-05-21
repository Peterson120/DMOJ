#include <stdio.h>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int bin(int key, const std::vector<std::pair<int, int>> &v) {
	int l = 0, r = v.size()-1;
	while (l <= r) {
		int m = l + ((r-l) >> 1);
		if (v[m].first == key) return m;
		else if (v[m].first < key) l = m + 1;
		else r = m - 1;
	}
	return r;
}

int main() {
	int N, day = 0; scan(N);
	std::vector<std::pair<int, int>> v[N];
	for (int i = 0; i < N; i++) {
		int l; scan(l);
		v[i].push_back({day, l});
	}
	scan(N);
	while (N--) {
		char q = getchar(); int x, y; scan(x); scan(y); x--;
		if (q == 'C') v[x].push_back({++day, y});
		else printf("%d\n", v[x][bin(y, v[x])].second);
	}
	return 0;
}
