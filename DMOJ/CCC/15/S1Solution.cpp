#include <cstdio>
#include <stack>
int main() {
	int K, total = 0; 
	scanf("%d", &K);
	std::stack<int> s;
	while (K--) {
		int t; 
		scanf("%d", &t);
		if (t == 0) {
			total -= s.top();
			s.pop();
		} else {
			total += t;
			s.push(t);
		}
	}
	printf("%d\n", total);
	return 0;
}
