#include <stdio.h>
int FindNthTerm(long long int);
int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", FindNthTerm(N));
}
int FindNthTerm(long long int n) {
	int mod=1e9+7, arr[] = {1,1,0};
	for (int i = 2; i <= n; i++)
		arr[i%3] = (arr[(i-1)%3] + arr[(i-2)%3])%mod;
	return arr[n%3];
}
