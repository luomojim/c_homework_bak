#define _CRT_SECURE_NO_WARNINGS
//输入一组勾股数，用分数格式输出其较小锐角的正弦值。（要求约分。）
//
//输入格式
//一行，包含三个正整数，即勾股数 a, b, c（无大小顺序）。
//
//输出格式
//一行，包含一个分数，即较小锐角的正弦值

#include <stdio.h>
#include <math.h>

int tri_func()
{
	int num[5] = {0};
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (num[i] > num[i + 1])
			{
				temp = num[i + 1];
				num[i + 1] = num[i];
				num[i] = temp;
			}
		}
	}

	a = num[0];
	c = num[2];

	int x = num[0];
	int y = num[2];
	int r = 0;
	while (a != 0 && c % a != 0)		//辗转相除，欧氏约分
	{
		r = c % a;
		c = a;
		a = r;
	}
	if (r != 0)
	{
		x = x / r;
		y = y / r;
	}
	printf("%d/%d", x, y);
	return 0;
}