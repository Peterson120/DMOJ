#include <stdio.h>
#include <vector>
std::vector<int> a, b;
int main() {
	int c;
	while ((c = getchar_unlocked()) != 10) a.push_back(c-'0');
	while ((c = getchar_unlocked()) != 10) b.push_back(c-'0');
	if ((a[0] == 0 && a.size() == 1) || (b[0] == 0 && b.size() == 1)) {printf("0\n"); return 0;}
	std::vector<int> v(a.size()+b.size());
	for (int i = a.size()-1; i >= 0; i--) {
		for (int j = b.size()-1; j >= 0; j--) {
			int sum = a[i] * b[j] + v[i+j+1];
			v[i+j+1] = sum%10;
			v[i+j] += sum/10;
		}
	}
	for (long long i = v[0] == 0 ? 1 : 0; i < (long long) v.size(); i++) printf("%d", v[i]);
	putchar('\n');
	return 0;
}
