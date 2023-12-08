#include <stdio.h>
typedef static int stint;
//typedef int static stint;
//stint a = 0;
void test()
{
//	typedef static int stint;
	static int a =0;
//	stint a =0;
	a++;
	printf("%d\n",a);
}
int main()
{
	int i =0;
	while(i<10)
	{
		test();
		i++;

	}
	return 0;
}

/*#define ADD(x,y) ((x)+(y))
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int sum = ADD(a,b);
	printf("%d\n",sum);
	return 0;
}*/
