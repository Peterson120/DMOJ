#include <stdio.h>
#include <deque>
#include <stack>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int N; scan(N);
	std::deque<char> q;
	while (N--) {
		char c; scanf(" %c", &c);
		q.push_back(c);
	}
	while (!q.empty()) {
		if (q.front() < q.back()) {
			putchar(q.front());
			q.pop_front();
		} else if (q.front() > q.back()) {
			putchar(q.back());
			q.pop_back();
		} else {
			std::stack<char> s;
			while (q.front() == q.back()) {
				s.push(q.front());
				q.pop_front();
				q.pop_back();
			}
			if (q.front() < q.back()) {
				while (!s.empty()) {
					q.push_back(s.top());
					q.push_front(s.top());
					s.pop();
				}
				putchar(q.front());
				q.pop_front();
			} else {
				while (!s.empty()) {
					q.push_back(s.top());
					q.push_front(s.top());
					s.pop();
				}
				putchar(q.back());
				q.pop_back();
			}
		}
	}
	putchar('\n');
	return 0;
}
