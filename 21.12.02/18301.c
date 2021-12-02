#include <stdio.h>

int main()
{
	long n1, n2, n12, chapman;
	
	scanf("%ld %ld %ld", &n1, &n2, &n12);
	
	chapman = ((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);
	
	printf("%ld\n", chapman);
	
	return 0;
}

/*
Chapman estimator N
N := ⌊(n1 + 1)(n2 + 1)/(n12 + 1) - 1⌋
*/