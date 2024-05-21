#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
int main() {
	short a,b,c,d,e,f;scan(a); scan(b); scan(c); scan(d); scan(e); scan(f);a=a+a+a+b+b+c;b=d+d+d+e+e+f;if (a>b)putchar('A');else if(b>a)putchar('B');else putchar('T');return 0;
}
