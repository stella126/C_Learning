#include <stdio.h>

int main()
{
	int a, b, c, d, min, sec;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	min = (a + b + c + d) / 60;
	sec = (a + b + c + d) % 60;
	printf("%d\n%d\n", min, sec);
	
	return 0;
}