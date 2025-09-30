#define _CRT_SECURE_NO_WARNINGS
//有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，假设从周 x 开始算起，过了 n 天以后，小鱼一共累计游泳了多少公里呢？
//
//输入格式
//输入两个正整数 x, n，表示从周 x 算起，经过 n 天。
//
//输出格式
//输出一个整数，表示小鱼累计游泳了多少公里。

#include <stdio.h>
int swimming_improved()
{
	int x, n;
	int sum;
	int week1;
	int remain;
	int total;
	scanf("%d %d", &x, &n);
	if (x + n - 1 <= 5) //1 2 3 4 5
	{
		printf("%d\n", n * 250);
		return 0;
	}
	if (x + n <= 7) 
	{
		int work_days = 5 - x + 1; 
		printf("%d\n", work_days * 250);
		return 0;
	}
	if (x == 6)
	{
		n = n - 2;
	}
	if (x == 7)
	{
		n = n - 1;
	}
	if (x <= 5)
	{
		n = n - 2;
	}
	sum = n ;
	week1 = 7 - 2 - (x - 1);
	if (week1 < 0)
	{
		week1 = 0;
	}
	sum = sum - week1;
	remain = sum % 7;
	sum = sum / 7;
	if (remain == 6)
	{
		total = 5 * 250;
		total = total + week1 * 250;
		total = total + sum * 1250;
		printf("%d\n", total);
		return 0;
	}
	total = week1 * 250;
	total = total + remain * 250;
	total = total + sum * 1250;
	printf("%d\n", total);
	return 0;
}