#include <stdio.h>
#include <math.h>
#include <vector>

std::vector<int> primes;
bool isPrime(int n) {
	if (n == 2)
		return true;
	else {
		for (int i = 3; i < sqrt(n); i+=2) {
			if (n % i == 0)
				return false;
		}
	}
	return true;
}

int findPrime(int start) {
	for (int i = start % 2 == 0 && start != 2 ? start + 1 : start; i < start + sqrt(start); i+=2) {
		if (isPrime(i))
			return i;
	}
	return 0;
}

int main() {
	int Q;
	scanf("%d", &Q);

	for (int i = 0; i < Q; i++) {
		int x, k, total = 0;
		scanf("%d%d", &x, &k);
		
		if (x < 2)
			x = 2;
		while (--k >= 0) {
			total += findPrime(x);
			x++;
		}
		printf("%d%d",  findPrime(--x), total);
	}
}
