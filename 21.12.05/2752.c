#include<stdio.h>

int main() {
	long a, b, c;
	
	scanf("%ld %ld %ld", &a, &b, &c);
	
	if(a < b)
	{
		if(c > b)
		{
			printf("%ld %ld %ld\n", a, b, c);
		}
		else if(c < b)
		{
			if(c < a)
			{
				printf("%ld %ld %ld\n", c, a, b);
			}
			else if(c > a)
			{
				printf("%ld %ld %ld\n", a, c, b);
			}
		}
	}
	else if(a > b)
	{
		if(c > a)
		{
			printf("%ld %ld %ld\n", b, a, c);
		}
		else if(c < a)
		{
			if(c > b)
			{
				printf("%ld %ld %ld\n", b, c, a);
			}
			else if(c < b)
			{
				printf("%ld %ld %ld\n", c, b, a);
			}
			
		}
	}
	return 0;
}