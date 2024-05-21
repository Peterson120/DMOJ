#include <stdio.h>
#include <list>
#include <unordered_map>

std::unordered_map<int, std::list<int>> edges;

int path = 0;
int DFS(int end, int v) {
	int paths = 0;
	if (end == v) {
		paths++;
		return 1;
	}
	for (int i : edges[v]) {
		paths += DFS(end, i);
	}
	return paths;
}

int main() {
	int n, p1, p2;
	scanf("%d", &n);
	while (edges[0].size() == 0) {
		scanf("%d%d", &p1, &p2);
		edges[p1].push_back(p2);
	}
	printf("%d\n", DFS(1, n));
}
