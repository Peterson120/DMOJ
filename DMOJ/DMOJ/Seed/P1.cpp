#include <cstdio>
#include <unordered_set>
#include <vector>
const char arr[5] = {'B', 'F', 'T', 'L', 'C'};
std::vector<char> v;
std::unordered_set<char> s;
int main() {
	char c;
	while ((c = getchar()) != '\n') s.insert(c);
	for (char d : arr)
		if (s.find(d) == s.end())
			v.push_back(d);
	if (v.size() == 0)
		printf("NO MISSING PARTS");
	else
		for (char d : v)
			putchar(d);
	putchar('\n');
	return 0;
}
