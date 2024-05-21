#include <stdio.h>

char word[101];
int main() {
	int N, S = 0, T = 0;
	scanf("%d", &N);
	for (int i = 0; i <= N; i++) {
		fgets(word, 100, stdin);

		int j = 0;
		while(word[j] != '\0') {
			if (word[j] == 'S' || word[j] == 's')
				S++;
			else if (word[j] == 'T' || word[j] == 't')
				T++;
			j++;
		}
	}
	if (T > S)
		printf("English\n");
	else 
		printf("French\n");
}
