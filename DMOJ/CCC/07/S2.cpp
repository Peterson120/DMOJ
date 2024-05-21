#include <cstdio>
#include <algorithm>
struct box {
	int d[3], vol;
	box() {};
	void set(int a, int b, int c) {
		vol = a*b*c;
		if (a <= b && a <= c) {
			d[0] = a;
			a = -1;
		} else if (b <= a && b <= c) {
			d[0] = b;
			b = -1;
		} else {
			d[0] = c;
			c = -1;
		}
		if (a >= b && a >= c) {
			d[2] = a;
			a = -1;
		} else if (b >= a && b >= c) {
			d[2] = b;
			b = -1;
		} else {
			d[2] = c;
			c = -1;
		}
		if (b == -1 && c == -1)
			d[1] = a;
		else if (a == -1 && b == -1)
			d[1] = c;
		else
			d[1] = b;
	};
};
box v[1000];
int find(box *x, int vol, int n) {
	for (int i = 0; i < n; i++) 
		if (vol <= v[i].vol)
			if (x->d[0] <= v[i].d[0] && x->d[1] <= v[i].d[1] && x->d[2] <= v[i].d[2])
				return i;
	return -1;
}
int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t[3]; for (int j = 0; j < 3; j++) scanf("%d", &t[j]);
		v[i].set(t[0], t[1], t[2]);
	}
	std::sort(v, v+n, [](const box &a, const box &b) {return a.vol < b.vol;});
	int m; scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int t[3], j; for (j = 0; j < 3; j++) scanf("%d", &t[j]);
		box x; x.set(t[0], t[1], t[2]);
		if ((j = find(&x, t[0]*t[1]*t[2], n)) == -1) printf("Item does not fit.\n");
		else printf("%d\n", v[j].d[0]*v[j].d[1]*v[j].d[2]);
	}
}
