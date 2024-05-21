#include <cstdio>
#include <unordered_map>
#include <vector>
short groups[2000] = {-1};
int g1 = 0, g2 = 0, N, M, S, T;
std::unordered_map<int, std::vector<int>> pairs; // i must be in a group, everyone else must be the other
bool group(int node) {
	for (int i : pairs[node]) {
		if (groups[i] == groups[node] && groups[i] != -1)
			return false;
	}
	return true;
}

int main() {
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &S, &T);
		pairs[S].push_back(T);
		pairs[T].push_back(S);
	}
	g1 = N;
	groups[1] = 1;
	if (!group(1))
		printf("-1");
	else
		for (int i = 1; i <= N; i++)
			printf("%d", groups[i]);
	printf("\n");
}
