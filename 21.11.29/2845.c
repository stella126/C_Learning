#include <stdio.h>

int main()
{
	int people, stage, total, new1, new2, new3, new4, new5;
	
	scanf("%d %d", &people, &stage);
	total = people * stage;
	scanf("%d %d %d %d %d", &new1, &new2, &new3, &new4, &new5);
	
	printf("%d %d %d %d %d\n", new1 - total, new2 - total, new3 - total, new4 - total, new5 - total);
	
	return 0;
}
