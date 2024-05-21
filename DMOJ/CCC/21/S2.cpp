#include <cstdio>
#include <bitset>
#define max 5000000
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
std::bitset<max> bits[2];
int main() {
	int n, m, q; scan(n); scan(m); scan(q);
	while (q--) {
		char c=getchar_unlocked(); int t; scan(t); t--;
		bits[c=='C'].flip(t);
	}
	int r = bits[0].count(), c = bits[1].count();
	printf("%d\n", n*c+r*m-(r*c<<1));
	return 0;
}
