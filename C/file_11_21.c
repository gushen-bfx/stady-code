#include <stdio.h>
int main()
{
	char z[] = "hello";
	printf("%s\n",z);
	int a = 20;
	int b = 10;
	int c = a>b?a:b;
	printf("c:%d\n",c);
	int d = a<b?a:b;
	printf("d:%d\n",d);
	int e = (a=a+1,b=b-1,a+b);
	printf("e:%d\n",e);
	return 0;
}
