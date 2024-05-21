#include <stdio.h>
#include <algorithm>
#include <vector>
std::vector<int> pairs;
int main() {
	int T;
	scanf("%d", &T);
	while (--T >= 0) {
		int d[4];
		for (int j = 0; j < 4; j++)
			scanf("%d", &d[j]);
		std::sort(d, d + 4);
		for (int i = 0; i < 4; i++)
			for (int j = i + 1; j < 4; j++) {
				pairs.push_back(d[i] + d[j]);
				pairs.push_back(d[(i+2)%4] + d[(j+2)%4]);
			}
		printf("%d\n", (int)pairs.size()>>1);
		for (int i = 0; i < (int)pairs.size(); i++)
			printf(i%2==0 ? "%d " : "%d\n", pairs[i]);
		pairs.clear();
	}
}
