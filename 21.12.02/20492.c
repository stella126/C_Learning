#include <stdio.h>

int main()
{
	long win, full, half;
	
	scanf("%ld", &win);
	full = win * 0.78;
	half = win * 0.8 + ((win * 0.2) * 0.78);
	
	printf("%ld %ld", full, half);
	
	return 0;
}
