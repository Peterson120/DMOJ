#include <iostream>
#include <cmath>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool visited[1000001];
std::vector<int> arr[1000001]; int M, N;
void dfs(int node) {
	visited[node] = 1;
	if (node == M*N) {printf("yes"); exit(0);}
	for (int z : arr[node]) {
		if (!visited[z])
			dfs(z);
	}
}

int main() {
	scan(M); scan(N);
	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++) {
			int t; scan(t);
			arr[i*j].push_back(t);
		}
	dfs(1);
	printf("no");
	return 0;
}
