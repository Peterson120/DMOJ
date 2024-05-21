#include <cstdio>
#include <vector>
#define size 10001
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool arr[size];
std::vector<int> v[size];
int main() {
	int n, m; scan(n); scan(m);
	while (m--) {
		int x, y, w, h; scan(x); scan(y); scan(w); scan(h);
		v[x].push_back(y);
		v[x].push_back(y+h);
		v[x+w].push_back(y);
		v[x+w].push_back(y+h);
	}
	int w = 0;
	for (int i = 0; i < n; i++) {
		for (int j : v[i]) arr[j] ^= 1; // Flip arr[v[i]]
		bool t = 0;
		for (int j = 0; j < n; j++) {
			t ^= arr[j];
			w += t;
		}
	}
	printf("%d\n", w);
	return 0;
}
