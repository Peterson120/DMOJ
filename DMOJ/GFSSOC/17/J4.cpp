#include <stdio.h>
#include <utility>
#include <string.h>
#include <algorithm>
#include <unordered_map>

std::unordered_map<char*, int> map;
char grades[1000001][101];
char temp[101];
const char delim = ' ';

bool comp(char* a, char* b) {
	return map[a] > map[b];
}

int bin(int r, char* key) {
	int l = 0;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (strcmp(grades[m], key) < 0)
			r = m - 1;
		else if (strcmp(grades[m], key) > 0)
			l = m + 1;
		else if (strcmp(grades[m], key) == 0)
			return m;
	}
	return l;
}

int main() {
	int N, C, M, average = 0, last, num = 0;
	scanf("%d%d%d%100s%d", &N, &C, &M, temp, &last);
	
	memcpy(grades[0], temp, sizeof(temp) / sizeof(temp[0]));
	map[temp] = last;

	if (N < C) {
		printf("Ace is dunzos.\n");
		return 0;
	}

	for (int i = 1; i < N; i++) {
		scanf("%100s%d", temp, &last);
		int loc = bin(i, temp);
		memmove(grades[loc] + sizeof(grades[loc]), grades[loc], i - loc);
		memcpy(grades[loc], temp, sizeof(temp) / sizeof(temp[0]));
		map[temp] = last;
	}

	for (int i = 0; i < M; i++) {
		scanf("%100s", temp);
		if (!std::binary_search(grades[0], grades[0] + N, temp)) {
			printf("Ace is dunzos.\n");
			return 0;
		}
		average += map[temp];
		map[temp] = 0;
		num ++;
	}
	
	std::sort(grades[0], grades[0] + sizeof(grades) / sizeof(grades[0]), comp);

	if (M < C || map[grades[N]] > average * 1.0 / num) {
		for (int i = N - 1; i >= 0 || map[grades[N]] > average * 1.0 / num; i--) {
			average += map[grades[i]];
			num++;
		}
	}

	if (average * 1.0 / num >= 50)
		printf("%.2f\n", average * 1.0 / C);
	else
		printf("Ace is dunzos.\n");
}
