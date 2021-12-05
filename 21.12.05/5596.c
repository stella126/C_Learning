#include<stdio.h>

int main() {
	int a, b, c, d;
	int aa, bb, cc, dd;
	int s, t;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d %d", &aa, &bb, &cc, &dd);
	
	s = a + b + c + d;
	t = aa + bb + cc + dd;
	
	if(s > t)
	{
		printf("%d\n", s);
	}
	else if(s < t)
	{
		printf("%d\n", t);
	}
	else
	{
		printf("%d\n", s);
	}
	
	return 0;
}