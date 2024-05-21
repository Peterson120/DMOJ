#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define INT_MAX 2147483647

std::vector<std::vector<int>> arr;
std::vector<std::vector<int>> temp;

int comp(int a, int b) {
	return a > b ? -1 : 1;
}

int query(int a, int b, int c, int d) {
	temp.resize(b-a+1);
	for (int i = a; i <= b; i++)
		std::copy(arr[i].begin() + c, arr[i].begin() + d + 1, back_inserter(temp[i]));

	for (int i = 0; i < (int)temp.size(); i++) {
		for (int j = 0; j < (int)temp[i].size(); j++) {
			printf("%d, ", temp[i][j]);
		}
	}
	printf("\n");

	int min = INT_MAX;
	for (int i = 0; i < (int) temp.size(); i++) {
		if (temp[i].size() > 1)
			std::sort(temp[i].begin(), temp[i].end(), comp);
		if (temp[i][0] < min)
			min = temp[i][0];
	}
	return min;
}

void init(std::vector<std::vector<int>> v) {
	arr = v;
	v.clear();
	v.shrink_to_fit();
}

int main() {
	init({{1, 2}, {3, 4}});
	std::cout << query(0, 1, 0, 1) << '\n';
	std::cout << query(1, 1, 0, 1) << '\n';
	std::cout << query(0, 0, 1, 1) << '\n';
}
