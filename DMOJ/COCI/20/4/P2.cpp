#include <stdio.h>
#include <vector>
#include <algorithm>
#include <bitset>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
const int max = 1e7+5;
std::vector<int> prime = {2};
int a, b, c, d;
int val(int x, int y) {
	int r = 0;
	while (y > 0) {
		r += y/x;
		y /= x;
	}
	return r;
}

int main() {
	std::bitset<max> bit;
	for (int i = 3; i < max; i+=2) {
		if (bit[i]) continue;
		prime.push_back(i);
		for (int j = i; j < max; j+=i)
			bit[j] = 1;
	}
	int t; scan(t);
	while (t--) {
		scan(a); scan(b); scan(c); scan(d); a--; c--;
		printf(std::any_of(prime.begin(), prime.end(), [](int n) {return val(n, b) + val(n, c) > val(n, a) + val(n, d);}) ? "NE\n" : "DA\n");
	}
	return 0;
}
