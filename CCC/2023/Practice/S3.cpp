#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::map<int, std::vector<int>> m;
int R[1001];
int main() {
	int N; scan(N);
	for (int i = 0; i < N; i++) {
		int t; scan(t); R[t]++;
	}
	for (int i = 1; i < 1001; i++) m[R[i]].push_back(i);
	if (m.rbegin()->second.size() > 1) printf("%d\n", m.rbegin()->second[m.rbegin()->second.size()-1] - m.rbegin()->second[0]);
	else printf("%d\n", std::max(abs(m.rbegin()->second[0]-std::next(m.rbegin(), 1)->second[0]), abs(m.rbegin()->second[0]-std::next(m.rbegin(), 1)->second[std::next(m.rbegin(), 1)->second.size()-1])));
	return 0;
}
