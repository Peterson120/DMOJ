#include <cstdio>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[1000000];
bool pass(int a[], bool up, int N) {
	if (a[0] == 0 && !up) a[0] = 1000000001;
	for (int i = 0; i < N-1; i++) {
		if (a[i+1] == -1) a[i+1] = 1000000001;
		else if (a[i+1] == 1000000001) a[i+1] = -1;
		if (a[i+1] == 0 && !up) a[i+1] = -1;
		else if (a[i+1] == 0) a[i+1] = 1000000001;
		if ((up && a[i] > a[i+1]) || (!up && a[i] < a[i+1]) || a[i] == a[i+1]) return 0;
		up = !up;
	}
	return 1;
}

int main() {
	int T; scan(T);
	while (T--) {
		int N; scan(N);
		for (int i = 0; i < N; i++) scan(arr[i]);
		printf((pass(arr, 1, N) || pass(arr, 0, N)) ? "YES\n" : "NO\n");
	}
	return 0;
}
