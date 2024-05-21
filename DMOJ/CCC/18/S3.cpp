#include <iostream>
#include <queue>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define x first
#define y second
typedef std::pair<int, int> pii;
int steps[100][100], N, M, d[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
char grid[100][100];
bool vis[100][100];
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	pii start({0, 0}); std::vector<pii> v;
	scan(N); scan(M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			grid[i][j] = getchar();
			if (grid[i][j] == 'S') {
				start.x = i;
				start.y = j;
			} else if (grid[i][j] == 'C') 	v.push_back({i, j});
			else if (grid[i][j] == '.') 	steps[i][j] = -1;
			else if (grid[i][j] == 'W') 	vis[i][j] = 1;
		}
		getchar(); // flush newline
	}
	for (auto &i : v) {
		vis[i.x][i.y] = 1;
		for (int j = 0; j < 4; j++) {
			int a = i.x, b = i.y;
			while ((a >= 0 && a < N) && (b >= 0 && b < M)) {
				a += d[j][0];
				b += d[j][1];
				if (grid[a][b] == 'W') break;
				else if (grid[a][b] == '.' || grid[a][b] == 'S') vis[a][b] = 1;
			}
		}
	}
	if (!vis[start.x][start.y]) {
		vis[start.x][start.y] = 1;
		std::queue<pii> q; q.push(start);
		while (!q.empty()) {
			pii curr = q.front(); q.pop();
			for (int i = 0; i < 4; i++) {
				pii next = curr;
				next.x = curr.x+d[i][0];
            	next.y = curr.y+d[i][1];
				while (1) {
					if (vis[next.x][next.y]) break;
					if (grid[next.x][next.y] == 'L')		vis[next.x][next.y--] = 1;
					else if (grid[next.x][next.y] == 'R')	vis[next.x][next.y++] = 1;
					else if (grid[next.x][next.y] == 'U')	vis[next.x--][next.y] = 1;
					else if (grid[next.x][next.y] == 'D')	vis[next.x++][next.y] = 1;
					else break;
				}
				if (!vis[next.x][next.y]) {
					vis[next.x][next.y] = 1;
					steps[next.x][next.y] = steps[curr.x][curr.y]+1;
					q.push(next);
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (steps[i][j] != 0)
				printf("%d\n", steps[i][j]);
}
