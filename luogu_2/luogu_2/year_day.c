#define _CRT_SECURE_NO_WARNINGS
//输入年份和月份，输出这一年的这一月有多少天。需要考虑闰年。
//
//输入格式
//输入两个正整数，分别表示年份 y 和月数 m，以空格隔开。
//
//输出格式
//输出一行一个正整数，表示这个月有多少天。

#include <stdio.h>

int year_day()
{
	int yr = 0;
	int m = 0;
	scanf("%d %d", &yr, &m);
	if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0 && yr >= 400))
	{
		if (m == 2)
		{
			printf("29\n");
			return 0;
		}
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		printf("31\n");
		return 0;
	}
	if (m == 2)
	{
		printf("28\n");
		return 0;
	}
	printf("30\n");
	return 0;
}