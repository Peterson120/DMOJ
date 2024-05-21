#include <stdio.h>
#include <queue>
#include <cmath>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define x first
#define y second
typedef std::pair<int, int> pii;
const int d[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int l, w;
pii in = {0,0}, end = {0,0};
char grid[50][50];
bool vis[50][50];
int BFS() {
	std::queue<std::pair<int, pii>> q; q.push({0, in});
	while (!q.empty()) {
		pii curr = q.front().second; int dist = q.front().first+1; q.pop();
		for (int i = 0; i < 4; i++) {
			pii next = curr;
			next.x += d[i][0];
			next.y += d[i][1];
			if (next.x >= w || next.x < 0 || next.y >= l || next.y < 0 || grid[next.x][next.y] == 'X') continue;
			else if (next.x == end.x && next.y == end.y) return dist;
			else if (!vis[next.x][next.y]) {
				vis[next.x][next.y] = 1;
				q.push({dist, next});
			}
		}
	}
	return -1;
}

int main() {
	int t; scan(t);
	while (t--) {
		scan(l); scan(w);
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < l; j++) {
				grid[i][j] = getchar();
				vis[i][j] = 0;
				if (grid[i][j] == 'C') 		in = {i, j};
				else if (grid[i][j] == 'W') end = {i, j};
			}
			getchar();
		}
		if (std::sqrt(std::pow(end.x - in.x, 2) + std::pow(end.y - in.y, 2)) > 60) {
			printf("#notworth\n");
			continue;
		}
		int steps = BFS();
		if (steps < 60 && steps != -1) printf("%d\n", steps);
		else printf("#notworth\n");
	}
}
