#include <stdio.h>
#include <math.h>
int main() {
	double first;
	scanf("%lf", &first);
	while (1) {
		double second; char op;
		scanf("%lf %c", &second, &op);
		if (op == '+')
			first += second;
		else if (op == '-')
			first -= second;
		else if (op == '*')
			first *= second;
		else if (op == '/')
			first /= second;
		else if (op == '%')
			first = fmod(first,second);
		else if (op == '^')
			first = pow(first,second);
		char c;
		if ((c = getchar()) == '\n' || c == '\0') break;
	}
	printf("%.1f\n", first);
}
