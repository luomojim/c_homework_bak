#define _CRT_SECURE_NO_WARNINGS
//阶梯收费电费

#include <stdio.h>
int eletric_fee()
{
	float input = 0;
	float price = 0;
	scanf("%f", &input);
	if (input <= 150)
	{
		printf("%.1f\n", input * 0.4463);
		return 0;
	}
	if (input >= 151 && input <= 400)
	{
		price = 0.4463 * 150;
		float input_1 = input - 150;
		price = price + (input_1 * 0.4663);
		printf("%.1f\n", price);
		return 0;
	}
	if (input >= 401)
	{
		price = 0.4463 * 150 + 0.4663 * 250;
		price = price + (input - 400) * 0.5663;
		printf("%.1f\n", price);
		return 0;
	}
	return 0;
}