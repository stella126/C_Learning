#include <stdio.h>

int main(void)
{
	int flor;
	
	scanf("%d", &flor);
	
	for(int i = 1; i <= flor; i++)
	{
		for(int j = flor; i < j; j--)
		{
			printf(" ");
		}
		
		for(int k = 0; k < i; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}