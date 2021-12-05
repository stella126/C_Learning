#include<stdio.h>

int main() {
	//a = 5m, b = 1m, c = 10;
	
	long a = 300, b = 60, c = 10;
	long bina, binb, binc;
	long sec;//받은 초
	
	scanf("%ld", &sec);
	
	if((sec / a) > 0)
	{
		if((sec % a) == 0)//5분단위로 컷할때 맞아떨어지는 경우
				{
					bina = sec / a;
					printf("%ld %d %d\n", bina, 0, 0);
				}
				else// 5분단위 노컷
				{
					bina = sec % a;
					if((bina % b) == 0)//1분단위 컷
					{
						binb = bina / b;
						printf("%ld %ld %d\n", bina, binb, 0);
					}
					else//1분단위 노컷
					{
						binb = bina % b;
						if((binb % c) == 0)//10초단위 컷
						{
							binc = binb / c;
							printf("%ld %ld %ld\n", bina, binb, binc);
						}
						else//구현할 수 없는 케이스
						{
							printf("-%d\n", 1);	
						}
					}
				}
	}
	else //5분단위보다 작음
	{
		
	}
	
	
	return 0;
}