#include <stdio.h> //백준 10818번

int main()
{
	int count, higst, lowst;
	int list[ ] = { };
	
	scanf("%d", &count);
	
	for(int i = 0; i < count; i++)
	{
		scanf("%d", &list[i]);
	}
	
	lowst = list[0];
	for(int j = 0; j < count; j++)
	{
		if(lowst > list[j])
		{
			lowst = list[j];
		}
	}
	
	higst = list[0];
	for(int k = 0; k < count; k++)
	{
		if(higst < list[k])
		{
			higst = list[k];
		}
	}
	
	printf("%d %d\n", lowst, higst);
	
	return 0;
}