#include <stdio.h>

int main()
{
	int mid, bot, oldest;
	
	scanf("%d", &mid);
	scanf("%d", &bot);
	
	if(mid > bot)
	{
		oldest = mid + (mid - bot);
	}
	else
	{
		oldest = bot + (bot - mid);
	}
		
	printf("%d\n", oldest);
	
	return 0;
}

/* 1~3
	2 - 3 = 1 = 2
	if(a > b)
*/