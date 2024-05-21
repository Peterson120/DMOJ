import sys
raw = sys.readline
v = [];
size = raw, s, f, n = -1;
for i in range(size):
	for (int i = 0; i < size; i++) {
		scanf("%d", &f);
		v[i] = f;
	}
	do {
		scanf("%d", &n);
		if (n == 99) {
			scanf("%d%d", &s, &f);
			memmove(v+s+1, v+s, sizeof(double)*(size-s));
			v[s] = v[s-1]*f/100.0;
			v[s-1] *= (100-f)/100.0;
			size++;
		} else if (n == 88) {
			scanf("%d", &s);
			v[s-1] += v[s];
			memmove(v+s, v+s+1, sizeof(double)*(size-s-1));
			size--;
		}
	} while (n != 77);
	for (int i = 0; i < size; i++) {
		int t = v[i];
		printf("%d ", (int)(v[i]*10)%10<5?t:t+1);
	}
	putchar('\n');
}
