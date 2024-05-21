#include <stdio.h>
#include <vector>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

std::vector<std::pair<int, int>> v;
int main() {
	int N, L, S; scan(N); scan(L); scan(S);
	for (int i = 0; i < N; i++) {
		int a, b, s; scan(a); scan(b); scan(s);
		v.push_back({a, s}), v.push_back({b + 1, -s});
	}
	v.push_back({0, 0}), v.push_back({L + 1, 0});
	std::sort(v.begin(), v.end(), [](std::pair<int, int> a, std::pair<int, int> b) {return a.first < b.first;});
	int spooky = 0, c = 0, in = 1;
	for (auto i : v) {
		if (spooky < S) c += i.first - in;
		in = i.first, spooky += i.second;
	}
	printf("%d\n", c);
}
