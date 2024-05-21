#include <stdio.h>
#include <string>
#include <bitset>
#include <algorithm>
bool pow2(unsigned long long *k) {
	std::string str = std::bitset<64> (*k).to_string();
	return std::count(str.begin(), str.end(), '1') == 1;
}
int main() {
	int N;
	scanf("%d", &N);
	while (--N >= 0) {
		unsigned long long n;
		scanf("%llu", &n);
		puts(pow2(&n) ? "T" : "F");
	}
}
