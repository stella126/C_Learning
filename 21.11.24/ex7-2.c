#include <stdio.h>

int main(void)
{
	int A[5] = {1, 2, 3, 4, 5};
	int i, sum = 0;
	double average;
	
	for(i = 0; i < 5;; i++)
		sum += A[i];
	
	average = (double)sum / i;
	
	printf("배열 A 원소의합은 %d이다.\n", sum);
	printf("배열 A 원소의평균은 %d이다.\n", average);
	
	return 0;
}
