#include <cstdio>
#include <deque>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	std::deque<int> d;
	for (int i = 1; i <= N; i++) {
		if (getchar() == '0') d.push_back(i);
		else d.push_front(i);
	}
	while (!d.empty()) {
		printf("%d\n", d.front());
		d.pop_front();
	}
	return 0;
}
