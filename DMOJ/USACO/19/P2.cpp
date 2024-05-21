#include <iostream>
#include <string>
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(NULL);
	int N; std::string str; std::cin >> N >> str; N++;
	for (int a = 1; a < N; a++) {
		bool found = 1;
		for (int i = 0; i + a < N; i++) {
			std::string s = str.substr(i, a);
			if ((int)str.find(s, str.find(s)+1) != -1) {found = 0; break;}
		}
		if (found) {std::cout << a << '\n'; return 0;}
	}
}
