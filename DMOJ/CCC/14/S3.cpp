#include <cstdio>
#include <stack>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	int T; scan(T);
	while (T--) {
		std::stack<int> s; int N; scan(N);
		for (int i = 0; i < N; i++) {
			int t; scan(t);
			s.push(t);
		}
		int l = 0; bool p = 1; std::stack<int> s2;
		while (!s.empty()) {
			if (s.top() == l+1) l = s.top();
			else {
				if (!s2.empty() && s2.top() == l+1) {
					while (!s2.empty() && l+1 == s2.top()) {
						l = s2.top(); 
						s2.pop();
					}
					if (s.top() == l+1) {l = s.top(); s.pop(); continue;}
				}
				if (!s2.empty() && s.top() > s2.top()) p = 0;
				s2.push(s.top());
			}
			s.pop();
		}
		while (!s2.empty()) {
			if (s2.top() != l+1) p = 0;
			else l = s2.top();
			s2.pop();
		}
		printf(p ? "Y\n" : "N\n");
	}
}
