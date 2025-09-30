#define _CRT_SECURE_NO_WARNINGS
//三个整数分别为 A, B, C。这三个数字不会按照这样的顺序给你，但它们始终满足条件：A < B < C。为了看起来更加简洁明了，
//	我们希望你可以按照给定的顺序重新排列它们。
//
//	输入格式
//	第一行包含三个正整数 A, B, C，不一定是按这个顺序。这三个数字都小于或等于 100。
//	第二行包含三个大写字母 A、B 和 C（它们之间没有空格）表示所需的顺序。
//
//	输出格式
//	在一行中输出 A，B 和 C，用一个 （空格）隔开。

#include <stdio.h>
#include <math.h>


int ABC()
{
	int input[5] = { 0 };
	char letter[5] = { 0 };
	int out[5] = { 0 };
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input[i]);		//输入abc
	}
	scanf("%s", letter);		//打印顺序
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (input[j] > input[j + 1])
			{
				temp = input[j + 1];
				input[j + 1] = input[j];
				input[j] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (letter[i] == 'A')
		{
			out[i] = 0;
		}
		if (letter[i] == 'B')
		{
			out[i] = 1;
		}
		if (letter[i] == 'C')
		{
			out[i] = 2;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d ",input[out[i]]);
	}
	
	return 0;
}