#define _CRT_SECURE_NO_WARNINGS

//P 老师需要去商店买 n 支铅笔作为小朋友们参加 NOIP 的礼物。她发现商店一共有 3 种包装的铅笔，不同包装内的铅笔数量有可能不同，
//价格也有可能不同。为了公平起见，P 老师决定只买同一种包装的铅笔。
//
//商店不允许将铅笔的包装拆开，因此 P 老师可能需要购买超过 n 支铅笔才够给小朋友们发礼物。
//
//现在 P 老师想知道，在商店每种包装的数量都足够的情况下，要买够至少 n 支铅笔最少需要花费多少钱。
//
//输入格式
//第一行包含一个正整数 n，表示需要的铅笔数量。
//
//接下来三行，每行用 2 个正整数描述一种包装的铅笔：其中第 1 个整数表示这种包装内铅笔的数量，第 2 个整数表示这种包装的价格。
//
//保证所有的 7 个数都是不超过 10000 的正整数。
//
//输出格式
//1 个整数，表示 P 老师最少需要花费的钱。

#include <stdio.h>
#include <math.h>

int pencil()
{
	float n = 0;
	int s11, p12;//数量
	int s21, p22;
	int s31, p32;
	int num1;//单价
	int num2;
	int num3;
	
	scanf("%f", &n);
	scanf("%d %d", &s11, &p12);
	scanf("%d %d", &s21, &p22);
	scanf("%d %d", &s31, &p32);
	num1 = ceil(n / s11);
	num1 = num1 * p12;
	num2 = ceil(n / s21);
	num2 = num2 * p22;
	num3 = ceil(n / s31);
	num3 = num3 * p32;
	if (num1 < num2 && num1 < num3)
	{
		printf("%d", num1);
		return 0;
	}
	if (num2 < num1 && num2 < num3)
	{
		printf("%d", num2);
		return 0;
	}
	if (num3 < num1 && num3 < num2)
	{
		printf("%d", num3);
		return 0;
	}

	return 0;
}