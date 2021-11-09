#include <stdio.h>

int main()
{
	
	int i, j, count = 0;
	
	//2 ~ 100까지 반복
	for(i = 2; i <= 100; ++i)
	{
		for(j = 2; j < i; ++j)
		{
			//i가 j(i미만의 수)로 나눈 나머짓값이 0일경우 프로그램을 break한다
			if ( i % j == 0)
			break;
		}
		
		//프로그램의 종료 없이 for문을 탈출할경우 소수로 판단한다
		if(j == i)
			{
				//소수가 나올경우 count변수를 ++해주고, 소수가 5개를 초과할경우 \n을 실시 5개를 초과하지 않은 경우 띄어쓰기(" ") 실시
				count++;
				printf("%d%s", i, count % 5 ? " " : "\n");
			}
	}
	
	
	return 0;
}