#include <stdio.h>
#include <utility>
#include <algorithm>
std::pair<int, int> val[100000];
int sorted[100000];
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &sorted[i]);
		val[i] = std::make_pair(0, sorted[i]);
	}
	std::sort(sorted, sorted+n);
	while (--k >= 0) {
		int x, y;
		scanf("%d%d", &x, &y);
		x--; y--;
		if (val[x].second > val[y].second)
			val[x].first++;
		else if (val[y].second > val[x].second)
			val[y].first++;
	}
	for (int i = 0; i < n; i++) {
		printf(i != n-1 ? "%d " : "%d\n", (int)(std::lower_bound(sorted, sorted+n, val[i].second) - sorted)-val[i].first);
	}
}
