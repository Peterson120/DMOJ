#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100001];
int find(int a) {
	if (arr[a] == a) return a;
	return arr[a] = find(arr[a]); // Recurs until available gate is found
}
int main() {
	int N, ans=0; scan(N);
	for (int i = 1; i <= N; i++) arr[i] = i;
	scan(N);
	while (N--) {
		int g; scan(g);
		int t = find(g);
		if (!t) break;
		arr[t]--; // Since gate is used, point to next avaliable gate
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
