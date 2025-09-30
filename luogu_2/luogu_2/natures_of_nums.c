#define _CRT_SECURE_NO_WARNINGS
//一些整数可能拥有以下的性质：
//
//性质 1：是偶数；
//性质 2：大于 4 且不大于 12。 >  <=12
//小 A 喜欢这两个性质同时成立的整数；
//Uim 喜欢这至少符合其中一种性质的整数；
//小 B 喜欢刚好有符合其中一个性质的整数；
//正妹喜欢不符合这两个性质的整数。
// 现在给出一个整数 x，请问他们是否喜欢这个整数？
//输入格式
//输入一个整数 x(0≤x≤1000)
//输出格式
//输出这 4 个人是否喜欢这个数字，如果喜欢则输出 1，否则输出 0，用空格分隔。输出顺序为：小 A、Uim、小 B、正妹。

#include <stdio.h>
int ou(int input)
{
	int ret = 0;
	if (input % 2 == 0)
	{
		ret = 1;
		return ret;
	}
	ret = 0;
	return ret;
}

int t_f(int input)
{
	int ret = 0;
	if (input > 4 && input <= 12)
	{
		ret = 1;
		return ret;
	}
	ret = 0;
	return ret;
}


int abcd()
{
	int input = 0;
	scanf("%d", &input);
	int check_1 = 0;
	int check_2 = 0;
	check_1 = ou(input);
	check_2 = t_f(input);
	if (check_1 == 1 && check_2 == 1)//1
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if (check_1 == 1 || check_2 == 1)//2
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if ((check_1 == 1 && check_2 == 0) || (check_1 == 0 && check_2 == 1))//3
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if (check_1 == 0 && check_2 == 0)//4
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	return 0;
}