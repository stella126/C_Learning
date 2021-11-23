#include <stdio.h>

int main(void)
{
	int sum = 0, index = 0;
	
	do
	{
		++index;
		sum += index;
	}while(sum < 1000);
	printf("합이 1000보다 작은 최대합은  = %d\n", sum - index);
	printf("마지막으로 더해지는 자연수는 %d이다.\n", index-1);
	
	return 0;
}