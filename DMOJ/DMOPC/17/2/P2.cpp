#include <stdio.h>
#include <deque>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	char c; std::deque<char> s;
	while ((c=getchar()) != 10) {
		if (c == '(') s.push_back(c);
		else {
			if (s.size() > 0 && s.back() == '(' && c == ')') s.pop_back();
			else s.push_back(c);
		}
	}
	while (!s.empty()) {
		if (s.front() == '(' && s.back() == ')') {
			s.pop_front();
			s.pop_back();
		} else break;
	}
	printf(s.size() == 2 || s.empty() ? "YES\n" : "NO\n");
	return 0;
}
