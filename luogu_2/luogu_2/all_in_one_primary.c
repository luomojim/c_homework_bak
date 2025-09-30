#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define pai 3.141593

int all_in_one()
{
	int t = 0;
	scanf("%d", &t);
	if (t == 1)
	{
		printf("I love Luogu!\n");
	}
	else if (t == 2)
	{
		printf("6 4\n");
	}
	else if (t == 3)
	{
		printf("3\n12\n2\n");
	}
	else if (t == 4)
	{
		printf("%.3f\n", (float)500 / (float)3);
	}
	else if (t == 5)
	{
		printf("%d\n", 15);
	}
	else if (t == 6)
	{
		printf("%.4f\n", (float)sqrt(6 * 6 + 9 * 9));
	}
	else if (t == 7)
	{
		printf("110\n");
		printf("90\n");
		printf("0\n");
	}
	else if (t == 8)
	{
		double r = 5;
		double round = 0;
		double area = 0;
		double volume = 0;
		round = 2 * pai * r;
		area = pai * r * r;
		volume = ((float)4 / (float)3) * pai * r * r * r;
		printf("%.4lf\n%.4lf\n%.3lf\n", round, area, volume);
	}
	else if (t == 9)
	{
		printf("22\n");
	}
	else if (t == 10)
	{
		printf("9");
	}
	else if (t == 11)
	{
		printf("33.3333");
	}
	else if (t == 12)
	{
		printf("13\nR\n");
	}
	else if (t == 13)
	{
		float v1 = 0;
		float v2 = 0;
		v1 = ((float)4 / (float)3) * pai * 4 * 4 * 4;
		v2 = ((float)4 / (float)3) * pai * 10 * 10 * 10;
		float v = v1 + v2;
		int a = (int)pow(v, 1.0 / 3.0);
		printf("%d", a);
	}
	else if (t == 14)
	{
		printf("50");
	}
	return 0;
}