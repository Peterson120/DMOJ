#include <stdio.h>
#include <stdbool.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
bool arr[200001];
int main() {
	int C, out = 0; scan(C);
	if ((arr[0]=getchar_unlocked() == '1')) out += 3;
	getchar_unlocked();
	for (int i = 1; i < C; ++i) {
		if ((arr[i]=getchar_unlocked() == '1')) out += 3 - (arr[i-1] << 1);
		getchar_unlocked();
	}
	bool last, curr;
	if ((last=getchar_unlocked() == '1')) out += arr[0] ? 1 : 3;
	getchar_unlocked();
	for (int i = 1; i < C; ++i) {
		if ((curr=getchar_unlocked() == '1')) out += 3 - ((last + !(i&1)*arr[i]) << 1);
		getchar_unlocked();
		last = curr;
	}
	printf("%d", out);
	return 0;
}
