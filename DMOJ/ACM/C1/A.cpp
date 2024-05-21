#include <stdio.h>
#include <iostream>
#include <string>

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		std::string word;
		std::cin >> word;
		if (word == "Scissors") 
			printf("Rock\n");
		else if (word == "Fox")
			printf("Foxen\n");
		else if (word == "Rock")
			printf("Paper\n");
		else if (word == "Paper")
			printf("Scissors\n");
		else if (word == "Foxen")
			return 0;
	}
}
