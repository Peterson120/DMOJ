#include <cstdio>
#include <cmath>
#include <stack>
#include <string.h>
int main() {
	char arr[102]; std::stack<double> s;
	scanf("%101[^\n]", arr);
	char *token = strtok(arr, " ");
	while (token != NULL) {
		if (token[0] >= '0' && token[0] <= '9') s.push(atoi(token));
		else {
			double num = s.top(); s.pop();
			if (!strcmp(token, "+")) 	  s.top() += num;
			else if (!strcmp(token, "-")) s.top() -= num;
			else if (!strcmp(token, "*")) s.top() *= num;
			else if (!strcmp(token, "/")) s.top() /= num;
			else if (!strcmp(token, "%")) s.top() = std::fmod(s.top(), num);
			else if (!strcmp(token, "^")) s.top() = std::pow(s.top(), num);
		}
		token = strtok(NULL, " ");
	}
	printf("%.1f\n", s.top());
}
