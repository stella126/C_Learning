#include<stdio.h>

int main() {
	long nowmin, nowhour;
	long plush, plusm, much;
	long exph, expm;
	
	scanf("%ld %ld", &nowhour, &nowmin);
	scanf("%ld", &much);
	
	plush = much / 60;
	plusm = much % 60;
	
	exph = nowhour + plush;
	expm = nowmin + plusm;
	
	if(expm >= 60)
	{
		exph += expm / 60;
		expm = expm % 60;
	}
	
	if(exph >= 24)
	{
		exph = exph - 24;
	}
	
	printf("%ld %ld\n", exph, expm);
	
	
	return 0;
}