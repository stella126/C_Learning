#include<stdio.h>

int main() {
	double d1, d2, cycle, pie = 3.141592;
	
	scanf("%lf", &d1);
	scanf("%lf", &d2);
	
	cycle = (d1 * 2) + (d2 * 2 * pie);
	
	printf("%lf\n", cycle);
	
	return 0;
}