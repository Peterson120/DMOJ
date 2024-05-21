#include <cstdio>
#include <unordered_map>
#include <vector>
#include <queue>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::unordered_map<int, std::vector<int>> m;
bool a[2000000];
int arr[2000000];

int main() {
	int N, M; scan(N); scan(M);
	for (int i = 0; i < N; i++) scan(arr[i]);
	for (int i = 0; i < M; i++) {
		int t, t1; scan(t); scan(t1);
		t--; t1--;
		m[t].push_back(t1);
		m[t1].push_back(t);
	}
	std::queue<std::pair<int, int>> q;
	q.push({N-1,0});
	while (!q.empty()) {
		auto f = q.front(); q.pop();
		if (arr[f.first] == arr[0] && f.first != 0) {
			printf("%d\n", f.second);
			return 0;
		}
		for (int &i : m[f.first]) {
			if (!a[i]) {
				a[i] = 1;
				q.push({i, f.second+1});
			}
		}
	}
	printf("-1\n");
	return 0;
}

