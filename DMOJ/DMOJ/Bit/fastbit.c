#include <stdio.h>
int setbits(unsigned long long a) {
	int ret;
	for (ret = 0; a; a &= a-1)
		ret++;
	return ret;
}

int main() {
	printf("%d\n", setbits(8));
	return 0;
}
