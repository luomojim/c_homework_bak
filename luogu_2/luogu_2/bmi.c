#define _CRT_SECURE_NO_WARNINGS
//bmi

#include <stdio.h>
#include <math.h>

int bmi()
{
	float m = 0;
	float h = 0;
	float bmi = 0;
	scanf("%f %f", &m, &h);
	bmi = m / (h * h);
	if (bmi < 18.5)
	{
		printf("Underweight\n");
		return 0;
	}
	else if (bmi >= 18.5 && bmi < 24)
	{
		printf("Normal\n");
	}
	else if (bmi >= 24)
	{
		printf("%.6g\n", bmi);
		printf("Overweight\n");
	}
	return 0;
}