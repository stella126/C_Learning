#include <stdio.h>
 
int main()
{
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	if(m == 1 || m == 2)
	{
		printf("NEWBIE!\n");
	}
	else if(m <= n && (m != 1 && m != 2))
	{
		printf("OLDBIE!\n");
	}
	else
	{
		printf("TLE!\n");
	}
	
	return 0;
}

//NEWBIE!  1학년 || 2학년
//OLDBIE!  grade <= N && (N != 1 && N != 2)
//TLE!	   (N != 1 && N != 2) && grade > N
