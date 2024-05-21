#include <cstdio>
#include <algorithm>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int nums[100];
int main() {
	int N, mid;
	scan(N);
	mid = N/2;
	for (int i = 0; i < N; i++)
	    scan(nums[i]);
	std::sort(nums, nums + N);
	if (N%2) {
		for (int i = 0; i < mid; i++)
			printf("%d %d ", nums[mid-i], nums[mid+i+1]);
		printf("%d\n", nums[0]);
	} else
		for (int i = 0; i < mid; i++)
			printf("%d %d ", nums[mid-i-1], nums[mid+i]);
}
