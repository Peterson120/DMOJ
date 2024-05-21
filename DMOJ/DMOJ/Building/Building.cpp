#include <stdio.h>
#include <map>
#include <deque>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::map<int, std::deque<int>> m;
int arr[1000000];
int main() {
	int N, D, X, Y; scan(N); scan(D); scan(X); scan(Y);
	for (int i = 0; i < N; i++) {
		scan(arr[i]);
		if (D > i) m[arr[i]].push_back(i);
	}
	int cnt = 0;
	for (int i = D; i < N; i++) {
		m[arr[i-D]].pop_front();
		m[arr[i]].push_back(i);
		if (m[arr[i-D]].size() == 0) m.erase(arr[i-D]);
		1
	}
		
	printf("%d\n", cnt);
	return 0;
}
