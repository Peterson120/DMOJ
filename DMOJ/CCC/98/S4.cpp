#include <stdio.h>
#include <cstdio>
#include <vector>

std::vector<int> nums;
std::vector<char> op;
int main() {
	int N, t;
	char x;
	scanf("%d%d", &N, &t);
	nums.push_back(t);
	for (int i = 0; i < N; i++) {
		while (getchar() != '\n') {
			x = getchar();
			scanf("%d", &t);
			op.push_back(x);
			nums.push_back(t);
		}
	}
}
