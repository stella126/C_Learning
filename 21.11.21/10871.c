// 수열 A = {1, 2, 3,,,} <= n개의 값

#include <stdio.h>

int main(void)
{
	int n, judge, num;
	
	scanf("%d %d", &n, &judge);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if(num < judge)
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return 0;
}