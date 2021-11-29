#include <stdio.h>

int main()
{
	int a, b, c, d, e, prof;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	prof = (a*a + b*b + c*c + d*d + e*e) % 10;
	
	printf("%d\n", prof);
	
	return 0;
}