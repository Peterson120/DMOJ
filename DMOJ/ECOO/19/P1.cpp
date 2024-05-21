#include <string.h>
#include <cstdio>
#include <cctype>
#include <string>
#include <unordered_set>
std::unordered_set<std::string> emails;
int main() {
	for (int _ = 0; _  < 10; _++) {
		int N;
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			char s[31];
			std::string str;
			scanf("%30s", s);
			int j = 0;
			bool plus = false;
			while (s[j] != '@') {
				if (s[j] == '+')	
					plus = true;
				else if (s[j] != '.' && !plus)
					str += tolower(s[j]);
				j++;
			}
			while (s[j] != '\0') {
				str += tolower(s[j]);
				j++;
			}
			emails.insert(str);
		}
		printf("%d\n", (int)emails.size());
		emails.clear();
	}
}
