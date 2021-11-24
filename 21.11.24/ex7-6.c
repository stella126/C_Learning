#include <stdio.h>

int main(void)
{
	int i, j, sum = 0;
	int a[ ][3] = {{90, 80, 90}
				   ,{70, 100, 100}
				   ,{80, 90, 90}};
	
	double average[3];
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
		
		average[i] = (double)sum / j;
		
		printf("%d번 학생의 평균은 %.2lf이다.\n", i, average[i]);
		
		sum = 0; //다음번 학생의 평균을 구하기 위해 초기화 시켜준다. 
				 //for문 조건항에 입력하여도 될듯 하다.
	}
	
	return 0;
}