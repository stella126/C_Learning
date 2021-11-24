#include <stdio.h>

int main(void)
{
	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j, sum;
	
	for(i = 0; i < 3; i++)
	{
		for(sum = 0, j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		printf("%d열의 원소를 다 더하면 %d입니다.\n", i + 1, sum);
	}
		
	
	return 0;
}