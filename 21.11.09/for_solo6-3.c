#include <stdio.h>

int main()
{
	
	int i, j;
	
	for(i = 6; i > 1; i--)
	{
		for(j = 1; i > j; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}