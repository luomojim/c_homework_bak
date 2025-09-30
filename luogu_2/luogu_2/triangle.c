#define _CRT_SECURE_NO_WARNINGS

//给出三条线段 a,b,c 的长度，均是不大于 10000 的正整数。打算把这三条线段拼成一个三角形，它可以是什么三角形呢？
//
//如果三条线段不能组成一个三角形，输出Not triangle；
//如果是直角三角形，输出Right triangle；
//如果是锐角三角形，输出Acute triangle；
//如果是钝角三角形，输出Obtuse triangle；
//如果是等腰三角形，输出Isosceles triangle；
//如果是等边三角形，输出Equilateral triangle。
//如果这个三角形符合以上多个条件，请按以上顺序分别输出，并用换行符隔开。
//
//输入格式
//输入 3 个整数 a、b 和 c。
//
//输出格式
//输出若干行判定字符串。

#include <stdio.h>
int iso(int a, int b, int c)	//等腰
{
	if (a == b || a == c || b == c)
	{
		return 1;
	}
	return 0;
}

int right(int a, int b, int c)	//直角
{
	if (a * a + b * b == c * c)
	{
		return 1;
	}
	return 0;
}

int equal(int a, int b, int c)	//等边
{
	if (a == b && b == c & c == a)
	{
		return 1;
	}
	return 0;
}

int cosc(float a, float b, float c)	//大边对大角
{
	int cosc = (a * a + b * b - c * c);
	if (cosc > 0)
	{
		return 0;	//<90
	}
	if (cosc < 0)
	{
		return 1;	//>90
	}
	return 2;
}
int triangle()
{
	float input[3];
	int i = 0;
	int count = 0;
	int temp = 0;
	scanf("%f %f %f", &input[0], &input[1], &input[2]);
	for (count = 0; count < 3; count++)
	{
		for (i = 0; i < 2; i++)
		{
			if (input[i] > input[i + 1])
			{
				temp = input[i + 1];
				input[i + 1] = input[i];
				input[i] = temp;
			}
		}
	}
	float a = input[0];
	float b = input[1];
	float c = input[2];
	if ((a + b) <= c)
	{
		printf("Not triangle");
		return 0;
	}
	int Right_triangle = right(a, b, c);
	int angle = cosc(a, b, c);
	int Isosceles_triangle = iso(a, b, c);
	int Equilateral_triangle = equal(a, b, c);
	if (Right_triangle == 1)
	{
		printf("Right triangle\n");
	}
	if (angle == 0)
	{
		printf("Acute triangle\n");
	}
	if (angle == 1)
	{
		printf("Obtuse triangle\n");
	}
	if (Isosceles_triangle == 1)
	{
		printf("Isosceles triangle\n");
	}
	if (Equilateral_triangle == 1)
	{
		printf("Equilateral triangle\n");
	}

	return 0;
}