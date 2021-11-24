#include <stdio.h>

int main(void)
{
	int mult[ ] = {4, 2, 5, 1, 3};
	int overtake = 1;
	
	for(int i = 0; i < 5; i++)
	{
		overtake = overtake * mult[i];
	}
	printf("%d\n", overtake);
	
	return 0;
	
}