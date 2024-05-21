#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Make a data structure that will realloc double the current allocation when full
typedef struct List {
	int length = 0;
	int **arr = {0};

	void push_back(int u, int v);
};
void List::push_back() {
	realloc();
}

bool visited[2000] = {false};
int adj[2000][2000], *indices;
bool DFS(const int* B, int v, int* len) {
	visited[v] = true;

	if (v == *B)
		return true;
	
	for (int i = 0; i < *len; i++)
		if (!visited[indices[i]])
			if (DFS(B, i, len))
				return true;
	return false;
}

int main() {
	int N, M, A, B, u, v;
	scanf("%d%d%d%d", &N, &M, &A, &B);
	M = M << 1;
	indices = calloc(M, sizeof(int));
	for (int i = 0; i < M; i+=2) {
		scanf("%d%d", &u, &v);
		adj[u][sizeof(adj[u])/sizeof(int) + 1] = v;
		adj[v][sizeof(adj[v])/sizeof(int) + 1] = u;
		indices[i] = u;
		indices[i + 1] = v;
	}
	

	if (sizeof(adj[B]) > sizeof(adj[A]) ? DFS(&B, A, &M) : DFS(&A, B, &M))
		printf("GO SHAHIR!\n");
	else 
		printf("NO SHAHIR!\n");
}

