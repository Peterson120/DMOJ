#include <unordered_map>
#include <vector>
std::unordered_map<int, std::vector<int>> adj;
bool visited[16] = {false};
int count = 0;

void DFS(int end, int curr) {
	visited[curr] = true;
	for (int i : adj[curr]) {
		if (end == i) {
			count++;
			continue;
		} else if (!visited[i])
		   DFS(end, i);
	}
}

int possible_paths(std::vector<std::vector<int>>edges, int n, int s, int d){
	for (int i = 0; i < n; i++) {
		adj[edges[i][0]].push_back(edges[i][1]);
	}
	DFS(d, s);
	return count;
}

int main() {
	int hold[][2] = {{0, 1}, {0, 3}, {1, 2}, {3, 2}};
	std::vector<std::vector<int>> edges;
	for (int i = 0; i < 4; i++) {
		std::vector<int> edge;
		edge.push_back(hold[i][0]);
		edge.push_back(hold[i][1]);
		edges.push_back(edge);
	}

	printf("%d\n", possible_paths(edges, 4, 0, 2));
}
