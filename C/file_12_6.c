#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sushu(int x)
{
	int a = 0;
	for (a=1;a<10;a++)
	{
		if (x%a!=0)
		{
			system("clear");
			printf("%d为素数\n",x);
			break;
		}
		else
		{
			system("clear");
			printf("%d不为素数\n",x);
			break;
		}
	}
}
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "niubity";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	memset(arr2,'x',5);
	printf("%s\n",arr2);
	int num1 = 0;
	scanf("%d",&num1);
	sushu(num1);
	return 0;
}
