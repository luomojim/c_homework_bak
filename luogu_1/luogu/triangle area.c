#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//triangle_area

int triangle_area()
{
	float p = 0;
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f %f", &a, &b, &c);
	p = 0.5 * (a + b + c);
	p = p * (p - a) * (p - b) * (p - c);
	float area = sqrt(p);
	printf("%.1f\n", area);
	return 0;
}