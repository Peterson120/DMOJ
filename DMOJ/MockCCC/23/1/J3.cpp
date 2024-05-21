#include <iostream>
#include <unordered_map>

std::unordered_map<long long, int> B;
long long A[200001], tmp, M;
int main() {
	int N, K, pb{0};
	scanf("%d %d %lld", &N, &K, &M);
	for (int i{0}; i < N; ++i)
		scanf("%lld", &A[i]);
	for (int i{0}; i < N; ++i) {
		scanf("%lld", &tmp);
		B[tmp] = i+1;
	}
	for (int i{0}; i < N; ++i) {
		int in = B[M-A[i]]-1;
		if (in != -1 && std::abs(i-in) >= K)
			++pb;
	}
	printf("%d\n", pb);
	return 0;
}

