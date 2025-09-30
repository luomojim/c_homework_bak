#define _CRT_SECURE_NO_WARNINGS
//小 B 喜欢吃苹果。她今天吃掉了 x 个苹果。英语课上学到了 apple 这个词语，想用它来造句。
//如果她吃了 1 个苹果，就输出 Today, I ate 1 apple.；如果她没有吃，那么就把 1 换成 0；
//如果她吃了不止一个苹果，别忘了 apple 这个单词后面要加上代表复数的 s。你能帮她完成这个句子吗？
//
//输入格式
//输入一行一个自然数 x，表示吃掉的苹果数。

#include <stdio.h>

int apples()
{
	int x = 0;
	scanf("%d", &x);
	if (x == 0)
	{
		printf("Today, I ate 0 apple.\n");
		return 0;
	}
	else if (x == 1)
	{
		printf("Today, I ate 1 apple.\n");
		return 0;
	}
	else
	{
		printf("Today, I ate %d apples.\n", x);
		return 0;
	}
	return 0;
}