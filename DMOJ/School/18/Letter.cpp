#include <stdio.h>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
struct query {int l, r, i;};
int arr[26][1000001], res[100000];
std::vector<query> q[26];
int main() {
	int i = 1, c;
	while ((c=getchar()) != 10) {
		if (c == 32) {i++; continue;}
		arr[c-'a'][i++]++;
	}
	int Q; scan(Q);
	for (int j = 0; j < Q; j++) {
		int l, r; scan(l); scan(r); c = getchar();
		q[c-'a'].push_back({l-1, r, j});
	}
	for (int j = 0; j < 26; j++) {
		if (q[j].empty()) continue;
		for (int x = 2; x <= i+1; x++)
			arr[j][x] += arr[j][x-1];
		for (auto &z : q[j]) res[z.i] = arr[j][z.r] - arr[j][z.l];
	}
	for (int j = 0; j < Q; j++) printf("%d\n", res[j]);
	return 0;
}
