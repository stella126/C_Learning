#include <stdio.h>
int main(void) {
	
    int cycle, a, b;
	
    scanf("%d", &cycle);
	
	for(int i = 1; i <= cycle; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	
	return 0;
}