#include <stdio.h>

char map[6];
int main() {
	char dir, loc;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf(" %c", &map[j]);
			if (map[j] == '*')
				loc = j;
		}
		for (int j = 0; j < 5; j++) {
			scanf(" %c", &dir);
			if (dir == 'L' && loc > 0)
					loc--;
			else if (dir == 'R' && loc < 4)
					loc++;
		}
		
		for (int j = 0; j < 5; j++)
			if (j == loc)
				printf("*");
			else
				printf(".");
		printf("\n");
	}
}
