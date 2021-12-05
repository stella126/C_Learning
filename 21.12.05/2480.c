#include<stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if((a == b) && (b == c))//세 눈이 같은 경우
	{
		printf("%d\n", 10000 + (a * 1000));
	}
	else if((a == b) && (a != c))//두 눈이 같은 경우
	{
		printf("%d\n", 1000 + (a * 100));
	}
	else if((a == c) && (a != b))
	{
		printf("%d\n", 1000 + (a * 100));
	}
	else if((b == c) && (b != a))
	{
		printf("%d\n", 1000 + (b * 100));
	}
	else //세 눈이 모두 다른 경우
	{
		if(a > b)//a가 b보다 큰 경우
		{
			if(c > a)//c가 제일 큰 경우
			{
				printf("%d\n", c * 100);
			}
			else if(c < a)//a가 제일 큰 경우
			{
				printf("%d\n", a * 100);
			}
			else//a와 b가 같은 경우
			{
				printf("%d\n", c * 100);
			}
		}
		else if(a < b)//a가 b보다 작은 경우
		{
			if(c > b)//c가 제일 큰 경우
			{
				printf("%d\n", c * 100);
			}
			else if(c < b)//b가 제일 큰 경우
			{
				printf("%d\n", b * 100);
			}
			else//c와 b가 같은 경우
			{
				printf("%d\n", b * 100);
			}
		}
	}
	return 0;
}