#include <bits/stdc++.h>
void clear(std::stack<std::string>& s) {
	std::stack<std::string> s2;
	s.swap(s2);
}
int main() {
	std::stack<std::string> s; char arr[100];
	while (!s.size() || s.top() != "0") {
		clear(s);
		scanf(" %99[^\n]", arr);
		for (int i = strlen(arr)-1; i >= 0; i--) {
			if (std::isdigit(arr[i])) s.push(std::string(1, arr[i]));
			else if (arr[i] > ' ') {
				std::string a = s.top(); s.pop();
				std::string b = s.top(); s.pop();
				s.push(a + ' ' + b + ' ' + arr[i]);
			}
		}
		if (s.top() == "0") return 0;
		std::cout << s.top() << '\n';
	}
}
