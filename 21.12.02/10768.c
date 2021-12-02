#include<stdio.h>

int main() {
	int day, month;
	int fday = 18, fmonth = 2;
	
	scanf("%d %d", &month, &day);	
	
	if(month > fmonth)
	{
		printf("After\n");
	}
	else if(month < fmonth)
	{
		printf("Before\n");
	}
	else if(month == fmonth)
	{
		if(day > fday)
		{
			printf("After\n");
		}
		else if(day < fday)
		{
			printf("Before\n");
		}
		else
		{
			printf("Special\n");
		}
	}
	
	return 0;
}