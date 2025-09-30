#define _CRT_SECURE_NO_WARNINGS
//题目描述
//一只大象口渴了，要喝 20 升水才能解渴，但现在只有一个深 h 厘米，底面半径为 r 厘米的小圆桶 （h 和 r 都是整数）。问大象至少要喝多少桶水才会解渴。

//Update：数据更新，这里我们近似地取圆周率 π = 3.14。

//输入格式
//输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深 h 和底面半径 r，单位都是厘米。

//输出格式
//输出一行，包含一个整数，表示大象至少要喝水的桶数。

#include <stdio.h>
#include <math.h>
#define pai 3.14
int elephant()
{
	float h = 0;
	float r = 0;
	scanf("%f %f", &h, &r);
	float cobe = pai* r * r * h / 1000;
	int times = ceil((float)20 / cobe);
	printf("%d\n", times);
	return 0;
}