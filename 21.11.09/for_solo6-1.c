#include<stdio.h>

int main()
{
	int number, i;
	
	printf("반복 횟수를 입력하세요: ");
	scanf("%d", &number);
	
	printf("for 문 예제입니다!!\n");
	
	for(i = 1; i <= number; i++)
	{
		printf("%d번 반복합니다!!\n", i);
	}
	
	return 0;
}