#include <stdio.h>

int main(void)
{
	int i, j;
	for(i = 1; i <= 100; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j);
			if(i == 9 && j == 9) goto end;
		}
	}
	
	end:
	printf("goto문으로 빠져나왔습니다.\n");
	
	return 0;
}