#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//使用自定义的函数求两个整数的和
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


int main(void)
{
	int a = 0;
	int b = 0;
	printf("请输入整数a和整数b(中间用空格隔开)\n");
	scanf("%d %d",&a,&b);
	
	int ret = scanf("%d %d", &a, &b);
	if (ret != 2) 
	{
		printf("输入错误！请输入两个整数。\n");
		return 1;  // 异常退出
	}


	int sum = Add(a,b);
	printf("结果是%d\n", sum);
	getchar();

	return 0;
}