#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	
	for(i = 1; i < 11; i++)
	{
		if(i%2 != 0) 
			continue;
		
		sum += i;
	}
	
	printf("1부터 10까지의 짝수의 합은 %d이다.\n", sum);
	return 0;
}
