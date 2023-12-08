#include <stdio.h>
int main()
{
	int num1[] = {0};
	int i = 0;
	while(i<4)
	{
		scanf("%d",&num1[i]);
		i++;

	}
	i = 1;
	int a = 0;
	int max = num1[a];
	while(num1[i]<max)
	{
		i++;
	}
	printf("%d\n",num1[i]);
	return 0;
}
