#include <stdio.h>

int main()
{
	int ur, tr, uo, to;
	long long score = 0;
	
	scanf("%d %d %d %d", &ur, &tr, &uo, &to);
	score = 56 * ur + 24 * tr + 14 * uo + 6 * to;
	printf("%lld\n", score);
	
	return 0;
}
