#include <stdio.h>

int main()
{
	int kin, que, roo, vis, kni, pon;
	
	scanf("%d %d %d %d %d %d", &kin, &que, &roo, &vis, &kni, &pon);
	
	printf("%d %d %d %d %d %d\n", 1 - kin, 1 - que, 2 - roo, 2 - vis, 2 - kni, 8 - pon);
	
	return 0;
}