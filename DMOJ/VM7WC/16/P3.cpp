#include <stdio.h>
#include <unordered_map>
#include <list>

bool visited[2001] = {false};
std::unordered_map<int, std::list<int>> adj;
bool DFS(const int* B, int v) {
	visited[v] = true;

	if (v == *B)
		return true;
	
	for (int& i : adj[v])
		if (!visited[i])
			if (DFS(B, i))
				return true;
	return false;
}

int main() {
	int N, M, A, B, u, v;
	scanf("%d%d%d%d", &N, &M, &A, &B);

	for (int i = 0; i < M; i++) {
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	

	if (sizeof(adj[B]) > sizeof(adj[A]) ? DFS(&B, A) : DFS(&A, B))
		printf("GO SHAHIR!\n");
	else 
		printf("NO SHAHIR!\n");
}
