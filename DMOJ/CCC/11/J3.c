#include <stdio.h>

int main() {
    int t1,t2,i = 2;
    scanf("%d",&t1);
    scanf("%d",&t2);
    while(t1 >= 0 && t2 >= 0)
	{
		t1 = i % 2 == 1 ? t1:t1-t2;
		t2 = i % 2 == 0 ? t2:t2-t1;
		i++;
	}
    printf("%d\n",i-1);
}
