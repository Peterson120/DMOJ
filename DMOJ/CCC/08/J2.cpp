#include <stdio.h>
#include <vector>
#include <algorithm>
std::vector<char> v = {'A', 'B', 'C', 'D', 'E'};
int main() {
	int b = 0, n = 0;
	while (b != 4) {
		scanf("%d%d", &b, &n);
		while (--n >= 0) {
			switch (b) {
				case  1:
					v.push_back(v[0]);
					v.erase(v.begin());
					break;
				case 2:
					v.insert(v.begin(), v[4]);
					v.pop_back();
					break;
				case 3:
					std::swap(v[0], v[1]);
					break;
			}
		}
	}
	for (int i = 0; i < 5; i++)
		printf("%c ", v[i]);
	printf("\n");
}
