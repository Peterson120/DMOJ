#include <stdio.h>
#include <unordered_map>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[300000];
int main() {
	int N, K; scan(N); scan(K);
	std::unordered_map<int, int> m;
	for (int i = 0; i < N; i++) {
		scan(arr[i]);
		if (i < K) m[arr[i]]++;
	}
	int max = m.size();
	for (int i = K; i < N; i++) {
		m[arr[i]]++;
		m[arr[i-K]]--;
		if (m[arr[i-K]] == 0) m.erase(arr[i-K]);
		if ((int)m.size() > max) max = m.size();
	}
	printf("%d\n", max);	
	return 0;
}
