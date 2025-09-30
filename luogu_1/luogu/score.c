#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//平时成绩，小测成绩，大考成绩，求加权和s
int total_score(int homework, int test, int big_test)
{
	int total = 0;
	total = homework * 0.2 + test * 0.3 + big_test * 0.5;
	return total;
}

int score()
{
	int homework = 0;
	int test = 0;
	int big_test = 0;
	scanf("%d %d %d", &homework, &test, &big_test);
	int total = total_score(homework, test, big_test);
	printf("%d", total);
	return 0;
}