#include <stdio.h>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int arr[100000];
int b(int l, int r, int val) {
	while (l <= r) {
		int mid = l + ((r - l) >> 1);
		if (arr[mid] == val) {
			while (arr[++mid] == val);
			return mid - 1;
		}
		else if(arr[mid] < val)
			l = mid + 1;
		else if(arr[mid] > val)
			r = mid - 1;
	}
	return l - 1;
}
int main() {
	int N, M, i;
	scan(N);
	scan(M);
	for (i = 0; i < N; i++)
		scan(arr[i]);
	std::sort(arr, arr+N);
	long long T = 0;
	for (i = 0; i < N; i++)
		T += b(i+1, N-1, M-arr[i]) - i;
	printf("%lld\n", T);
}
