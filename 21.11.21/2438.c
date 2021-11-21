#include <stdio.h>
int main(void) {
	
    int flor, a, b;
	
    scanf("%d", &flor);
	
	for(int i = 1; i <= flor; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}