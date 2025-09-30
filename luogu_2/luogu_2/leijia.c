#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int leijia()
{
	int nums[6];//开辟一个空间为6的数组
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);//输入
	int i = 0;//初始化变量
	int total[6];//开辟一个空间为6的数组
	total[0] = 0;
	for (i = 1; i <= 5; i++)		//循环五次
	{
		total[i] = total[i - 1] + nums[i-1];// 0+1 =1, 1+2 = 3
		printf("%d\n", total[i]);
	}
	return 0;
}