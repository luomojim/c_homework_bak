#define _CRT_SECURE_NO_WARNINGS
//小 B 喜欢吃苹果。她现在有 m（1≤m≤100）个苹果，吃完一个苹果需要花费 t（0≤t≤100）分钟，
// 吃完一个后立刻开始吃下一个。现在时间过去了 s（1≤s≤10000）分钟，请问她还有几个完整的苹果？
//
//输入格式
//输入三个非负整数表示 m, t, s。
//
//输出格式
//输出一个整数表示答案。
#include <stdio.h>
#include <math.h>
int apple()
{
	int m = 0;
	unsigned int t = 0;
	unsigned int s = 0;
	int eat = 0;
	scanf("%d %u %u", &m, &t, &s);
	if (t == 0)
	{
		printf("0");
		return 0;
	}
	eat = ceil((float)s / (float)t);
	m = m - eat;
	if (m <= 0)
	{
		printf("0");
		return 0;
	}
	printf("%d", m);
	return 0;
}