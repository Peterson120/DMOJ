#include <iostream>
#include <vector>

void DFS(std::vector<std::vector<int>> &adj, bool *visited, int node) {
	visited[node] = true;
	for (int i = 0; i < adj[node].size(); i++) {
		if (!visited[i] && adj[node][i])
			DFS(adj, visited, i);
	}
}

int numProvinces(std::vector<std::vector<int>> adj, int V) {
	bool visited[V] = {false}; int c = 0;
	for (int i = 0; i < V; i++) {
		if (!visited[i]) {
			c++;
			DFS(adj, visited, i);
		}
	}
	return c;
}

int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int V, x;
	std::cin >> V;
	std::vector<std::vector<int>> adj;
	for (int i = 0; i < V; i++) {
		std::vector<int> temp;
		for (int j = 0; j < V; j++) {
			std::cin >> x;
			temp.push_back(x);
		}
		adj.push_back(temp);
	}
	std::cout << numProvinces(adj, V) << '\n';
	return 0;
}
