#include <stdio.h>
#include <utility>
double slope(std::pair<int, int> *a, std::pair<int, int> *b) {
	return (b->second - b->first)/(a->second - a->first);
}
bool coincident(std::pair<int, int> *x) {
	if (slope(&x[0], &x[1]) == slope(&x[2], &x[3]) || )
		return true;
	return false;
}
std::pair<double, double> intersect(std::pair<int, int> *x) {
	double calc[] = {x[1].second-x[0].second, x[0].first-x[1].first, calc[0]*x[0].first+calc[1]*x[0].second, x[3].second-x[2].second, x[2].first-x[3].first, calc[3]*x[2].first+calc[4]*x[2].second, calc[0]*calc[4]-calc[3]*calc[1]};
	return std::make_pair((calc[4]*calc[3] - calc[1]*calc[5])/calc[6], (calc[0]*calc[5] - calc[4]*calc[3])/calc[6]);
}
int main() {
	std::pair<int, int> points[4];
	int x, y;
	for (int i = 0; i < 4; i++) {
		scanf("%d%d", &x, &y);
		points[i] = std::make_pair(x, y);
	}
	if (slope(&points[0], &points[1])==slope(&points[2],&points[3]))
		printf("parallel\n");
	else if (coincident(points))
		printf("coincident\n");
	else
		
}
