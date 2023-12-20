#include <stdio.h>
//写代码将3个数按照顺序输出（包括用函数）
int cont = 0;
int Fib(int n)
{
//	cont++;
	if(n<=2)
	{
		return 1;
	}
	else
	{
//		cont++;
		return Fib(n-1)+Fib(n-2);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = Fib(n);
	printf("Fib=%d\n",ret);
	//printf("计算次数:%d\n",cont);
	int i = 0;
	printf("1－100之间3的倍数\n");
	for (i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
