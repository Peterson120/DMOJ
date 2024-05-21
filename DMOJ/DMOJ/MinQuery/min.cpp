#include <cstdio>
#include <vector>
#include <algorithm>
std::vector<std::vector<int>> v;
void init(std::vector<std::vector<int>> arr) {
	v = arr;
}

int query(int a, int b, int c, int d) {
	int low = v[a][c];
	for(int i = a; i <= b; i++)
		low = std::min(low, *std::min_element(v[i].begin() + c, v[i].begin() + d + 1));
	return low;
}

int main() {
	std::vector<std::vector<int>> t = {{1, 2}, {3, 4}};
	init(t);
	printf("%d\n", query(0, 1, 0, 1));
	printf("%d\n", query(1, 1, 0, 1));
	printf("%d\n", query(0, 0, 1, 1));
}
