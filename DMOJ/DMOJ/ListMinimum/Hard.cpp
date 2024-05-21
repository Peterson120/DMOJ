#include <cstdio>
#include <vector>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	std::vector<int> v(N);
	for (int i = 0; i < N; i++) scan(v[i]);
	std::sort(v.begin(), v.end());
	for (int &i:v) printf("%d\n", i);
	return 0;
}
