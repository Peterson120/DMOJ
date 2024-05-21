#include <stdio.h>
#define MAX1 35
#define MAX2 100
#define MAX3 10
#define NUM1 30
#define NUM2 60
#define NUM3 9

static int quarters, play1, play2, play3;

void check(int i);
int main()
{
	scanf("%d", &quarters);
	scanf("%d", &play1);
	scanf("%d", &play2);
	scanf("%d", &play3);
	int i = 0;
	while (quarters > 0)
	{
		check(i);
		quarters--;
		i++;
	}
	printf("Martha plays %d times before going broke.", i);
	return 0;
}

void check(int i)
{
	switch (i % 3)
	{
		case 0:
			play1++;
			if (play1 >= MAX1)
			{
				play1 = 0;
				quarters += NUM1;
			}
			break;
		case 1:
			play2++;
			if (play2 >= MAX2)
			{
				play2 = 0;
				quarters += NUM2;
			}
			break;
		case 2:
			play3++;
			if (play3 >= MAX3)
			{
				play3 = 0;
				quarters += NUM3;
			}
			break;
	}
	return;
}
