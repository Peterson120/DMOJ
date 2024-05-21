#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define max 100001
int arr[max];
int main() {
	arr[1] = 1;
	for (int i = 2; i < max; i++) arr[i] = 1;
	for (int i = 2; i < max; i++) for (int j = i; j < max; j+=i) arr[j]++;
	std::unordered_map<int, std::vector<int>> m;
	for (int i = 1; i < max; i++) m[arr[i]].push_back(i);
	int Q; scan(Q);
	while (Q--) {
		int k, a, b; scan(k); scan(a); scan(b);
		printf("%d\n", (int)(std::upper_bound(m[k].begin(), m[k].end(), b) - std::lower_bound(m[k].begin(), m[k].end(), a)));
	}
	return 0;
}
