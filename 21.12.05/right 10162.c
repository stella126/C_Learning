#include<stdio.h>

int main() {
	//a = 5m, b = 1m, c = 10;
	
	long a = 300, b = 60, c = 10;
	long bina, binb, binc;
	long sec;//받은 초
	
	scanf("%ld", &sec);
	
	if((sec % c) == 0)
	{
		bina = sec / a;
		sec %= a;
		binb = sec / b;
		sec %= b;
		binc = sec / c;
		printf("%ld %ld %ld\n", bina, binb, binc);
	}
	else
	{
		printf("-1\n");
	}
	
	return 0;
}