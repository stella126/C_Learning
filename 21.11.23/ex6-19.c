#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	
	for(i = 1; i <= 10; i++)
	{
		if((i%2 == 0) && (i%3 == 0))
			continue;
		printf("%d ", i);
	}
	
	printf("\n");
	
	return 0;
}
