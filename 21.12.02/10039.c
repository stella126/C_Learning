#include <stdio.h>

int main()
{
	int a[5];
	int sum = 0, avg = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int j = 0; j < 5; j++)
	{
		if(a[j] < 40)
		{
			a[j] = 40;
		}
	}
	
	for(int k = 0; k < 5; k++)
	{
		sum += a[k];
	}
	
	avg = sum / 5;
	
	printf("%d\n", avg);
	
	return 0;
}
