#include <cstdio>
#include <vector>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::vector<int> v;
int main() {
	for (int z = 0; z < 10; z++) {
		int N, c = 0; scan(N);
		for (int i = 0; i < N; i++) {
			int t; scan(t);
			v.push_back(t);
		}
		for (int i = N-1; i > 0; i--) {
			auto it = std::find(v.begin(), v.end(), i);
			if (std::find(v.begin(), v.end(), i+1) < it) {
				c += it - v.begin();
				v.erase(it);
				v.insert(v.begin(), i);
			}
		}
		printf("%d\n", c);
		v.clear();
	}
}
