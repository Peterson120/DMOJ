#include <stdio.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
std::unordered_map<int, std::vector<int>> adj;
bool visited[20] = {false};
bool DFS(bool visit[], int initial, int len, int node) {
	visit[node] = true;
	if (len == 0) {
		visit[node] = false;
		if (std::find(adj[node].begin(), adj[node].end(), initial) != adj[node].end())
			return true;
		return false;
	}
	for (int i : adj[node]) {
		if (!visit[i]) {
			if (DFS(visit, initial, len-1, i))
				return true;
		}
	}
	visit[node] = false;
	return false;
}

int main() {
	int N, M, u, v;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d%d", &u, &v);
		u--; v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 0; i < N; i++) {
		if (DFS(visited, i, 5, i)) {
			printf("YES\n");
			return 0;
		}
		visited[i] = true;
	}
	printf("NO\n");
}
