#include <cstdio>
#include <algorithm>
#include <vector>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::vector<int> flakes[100000];
int comp(const std::vector<int> &a, const std::vector<int> &b) {
	for (int i = 0; i < 6; i++)	
		if (a[i] < b[i]) return -1;
		else if (a[i] > b[i]) return 1;
	return 0;
}
int cmp(int* a,int* b) {
	for (int i = 0; i < 6; i++)
		if (a[i] > b[i]) return 1;
		else if (a[i] < b[i]) return -1;
	return 0;
}
int main() {
	int n; scan(n);
	for (int i = 0; i < n; i++) {
		int min = 100000000, mins[6]; flakes[i].resize(6);
		for (int j = 0; j < 6; j++) {
			scan(flakes[i][j]);
			if (flakes[i][j] < min) min = flakes[i][j];
			mins[j] = 100000000;
		}
		for (int j = 0; j < 6; j++) {
			if (flakes[i][j] == min) {
				int tmp[6];
				for(int x = j; x < j+6; x++) tmp[x-j] = flakes[i][x%6];
				if (cmp(tmp, mins) == -1) std::copy(tmp, tmp+6, mins);
				for(int x = j+6; x > j; x--) tmp[j-x+6] = flakes[i][x%6];
				if (cmp(tmp, mins) == -1) std::copy(tmp, tmp+6, mins);
			}
		}
		std::copy(mins, mins+6, flakes[i].begin());
	}
	std::sort(flakes, flakes+n, [](const std::vector<int> &a, const std::vector<int> &b) {for (int i = 0; i < 6; i++) if (a[i] != b[i]) return a[i] < b[i]; return a[5] < b[5];});
	for (int i = 1; i < n; i++) {
		if (comp(flakes[i], flakes[i-1]) == 0) {
			printf("Twin snowflakes found.\n");
			return 0;
		}
	}
	printf("No two snowflakes are alike.\n");
	return 0;
}
