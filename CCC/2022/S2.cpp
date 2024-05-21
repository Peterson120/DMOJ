#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

std::unordered_map<std::string, std::vector<std::string>> same;
std::unordered_map<std::string, std::vector<std::string>> diff;
std::string temp1, temp2, temp3;

bool comp(const std::string *t, const std::string *u) {
	std::vector<std::string>::iterator it;
	if ((it = find(diff[*t].begin(), diff[*t].end(), *u)) != diff[*t].end()) {
		diff[*t].erase(it);
		diff[*u].erase(find(diff[*u].begin(), diff[*u].end(), *t));
		return 1;
	} else if ((it = find(same[*t].begin(), same[*t].end(), *u)) != same[*t].end() && (find(same[*u].begin(), same[*u].end(), *t) == same[*u].end())) {
		same[*t].erase(it);
	}
	return 0;
}

int main() {
	int X, Y, G, v = 0;

	scanf("%d", &X);
	for(int i = 0; i < X; i++) {
		std::cin >> temp1 >> temp2;
		same[temp1].push_back(temp2);
		same[temp2].push_back(temp1);
	}

	scanf("%d", &Y);
	for(int i = 0; i < Y; i++) {
		std::cin >> temp1 >> temp2;
		diff[temp1].push_back(temp2);
		diff[temp2].push_back(temp1);
	}

	scanf("%d", &G);
	for(int i = 0; i < G; i++) {
		std::cin >> temp1 >> temp2 >> temp3;		
		
		int one = 0, two = 0;	
		while (one++ < X && two++ < Y) {
			if ((comp(&same[one].first) && !comp(&same[one].second)) || (!comp(&same[one].first) && comp(&same[one].second))) {
				same.erase(same.begin() + one);
				v++;
				X--;
			}

			if (comp(&diff[two].first) && comp(&diff[two].second)) {
				diff.erase(diff.begin() + two);
				v++;
				Y--;
			}
		}

		for (; one < X; one++) {
			if ((comp(&same[one].first) && !comp(&same[one].second)) || (!comp(&same[one].first) && comp(&same[one].second))) {
				same.erase(same.begin() + one);
				v++;
				X--;
			}
		}

		for (; two < Y; two++) {
			if (comp(&diff[two].first) && comp(&diff[two].second)) {
				diff.erase(diff.begin() + two);
				v++;
				Y--;
			}
		}
	}
	printf("%d\n", v);
}
