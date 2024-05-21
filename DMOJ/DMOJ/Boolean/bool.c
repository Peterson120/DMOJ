#include <stdio.h>
int main() {
	int i = 0, cu = 0; char c;
	while ((c = getchar()) != '\n') {
		if (c == 'n')
			cu++;
		else if (c == 'F')
			cu++;
		i++;
	}
	if (cu % 2 == 0)
		printf("True");
	else
		printf("False");
}
