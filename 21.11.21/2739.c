#include <stdio.h>

int main(void)
{
	int n, count;
	
	scanf("%d", &n);
	
	for(count = 1; count < 10; count++)
	{
		printf("%d X %d = %d\n", n, count, n * count);	
	}
	
	return 0;
}