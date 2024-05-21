#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int day[5];
int main() {
	int N, max = 0; scan(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++) {
			day[j] += getchar() =='Y';
			max = max < day[j] ? day[j] : max;
		}
		getchar();
	}
	char c = 0;
	for (int i = 0; i < 5; i++) if (day[i] == max) {printf(!c ? "%d" : ",%d", i+1); c = 1;}
	return 0;
}
