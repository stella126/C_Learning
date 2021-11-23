#include <stdio.h>

int main(void)
{
	int i, sum = 0;
	
	for(i = 1; i <= 10; i++)
	{
		if(i % 2 ==0) continue;
		sum += i;
	}
	
	printf("1부터 10까지 홀수의 합은 %d이다. \n", sum);
	
	
	return 0;
}