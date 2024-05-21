#include <iostream>
#include <queue>
char arr[20][20];
bool visited[20][20];
int min = -1;
struct Node {
	int x, y, dist;
	Node(int a, int b, int c) : x(a), y(b), dist(c){};
};
void bfs(int r, int c) {
	std::queue<struct Node> q;
	q.push(Node(0,0,0));
	while (!q.empty()) {
		struct Node x = q.front();
		if (visited[x.x][x.y]) {
			q.pop();
			continue;
		}
		visited[x.x][x.y] = true;
		if (x.y == c-1 && x.x == r-1)
			if (x.dist < min || min == -1)
				min = x.dist+1;
		if (arr[x.x][x.y] == '-' || arr[x.x][x.y] == '+') {
			if (x.y > 0 && !visited[x.x][x.y-1]) 
				q.push(Node(x.x, x.y-1, x.dist+1));
			if (x.y+1 < c && !visited[x.x][x.y+1])
				q.push(Node(x.x, x.y+1, x.dist+1));
		}
		if (arr[x.x][x.y] == '|' || arr[x.x][x.y] == '+') {
			if (x.x > 0 && !visited[x.x-1][x.y])
				q.push(Node(x.x-1, x.y, x.dist+1));
			if (x.x+1 < r && !visited[x.x+1][x.y])
				q.push(Node(x.x+1, x.y, x.dist+1));
		}
		q.pop();
	}
}
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int t, r, c;
	std::cin >> t;
	while (t--) {
		std::cin >> r >> c;
		min = -1;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				std::cin >> arr[i][j];
				visited[i][j] = false;
				if (arr[i][j] == '*')
					visited[i][j] = true;
			}
		}
		bfs(r, c);
		std::cout << min << '\n';
	}
	return 0;
}