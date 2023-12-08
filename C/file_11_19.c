#include <stdio.h>
int main()
{
	int input = 0;//定义变量初始化
	printf("人生选择模拟器\n");
	printf("请选择('1'or'2')\n");
	scanf("%d",&input);
	if(input ==1)//判断变量input是否等于1
	{
printf("努力学习,拿offer走上人生巅峰!\n");
	}
	else
	{
printf("摆烂,卖红薯!\n");
	}
	return 0;
}
