#include <stdio.h>
#include <set>
#include <algorithm>
struct tuple {
	int f, e, p;
	tuple(){};
	tuple(int a, int b, int c) : f(a), e(b), p(c){};
	void make_tuple(int a, int b, int c) {f = a, e = b, p = c;}
};
struct tuple a[100001];
std::set<int> b;
bool comp(const struct tuple a, const struct tuple b)  {return a.f < b.f;}
int main() {
	int B, F, total = 0;
	scanf("%d", &B);
	for (int i = 0; i < B; i++) {
		int f, e, p;
		scanf("%d%d%d", &f, &e, &p);
		total += p;
		a[i].make_tuple(f, e, p);
	}
	std::sort(a, a + B, comp);
	scanf("%d", &F);
	for (int i = 0; i < F; i++) {
		int t;
		scanf("%d", &t);
		b.insert(t);
	}
	int j = 0;
	for (auto i = b.begin(); i != b.end(); ) {
		if (j >= B)
			break;
		if (*i < a[j].f)
			i++;
		else {
			if (*i <= a[j].e) {
				total -= a[j].p;
				a[j].p = 0;
			}
			j++;
		}
	}
	printf("%d\n", total);
}