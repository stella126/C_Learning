#include<stdio.h>

int main() {
	int day, car[5];
	int count = 0;
	
	scanf("%d", &day);
	day = day % 10;
	
	for (int i = 0; i < 5; i++) 
	{
		scanf("%d", &car[i]);
	}

	
	for (int i = 0; i < 5; i++) 
	{
		if (day == car[i]) 
		{
			count++;
		}
	}
	
	printf("%d\n", count);
	return 0;
}