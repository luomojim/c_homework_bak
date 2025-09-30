#define _CRT_SECURE_NO_WARNINGS
//班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是 1 元 9 角，
//而班主任给小玉的钱是 a 元 b 角，小玉想知道，她最多能买多少只签字笔呢。
//
//输入格式
//输入只有一行两个整数，分别表示 a 和 b。
//
//输出格式
//输出一行一个整数，表示小玉最多能买多少只签字笔。


#include <stdio.h>
#include <math.h>
#define price 19
int shopping()
{
	int yuan = 0;
	int jiao = 0;
	int total = 0;
	int num = 0;
	scanf("%d %d", &yuan, &jiao);
	total = yuan * 10 + jiao;
	num = floor((float)total / price);
	printf("%d\n", num);
	return 0;
}