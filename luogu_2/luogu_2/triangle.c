#define _CRT_SECURE_NO_WARNINGS

//���������߶� a,b,c �ĳ��ȣ����ǲ����� 10000 ����������������������߶�ƴ��һ�������Σ���������ʲô�������أ�
//
//��������߶β������һ�������Σ����Not triangle��
//�����ֱ�������Σ����Right triangle��
//�������������Σ����Acute triangle��
//����Ƕ۽������Σ����Obtuse triangle��
//����ǵ��������Σ����Isosceles triangle��
//����ǵȱ������Σ����Equilateral triangle��
//�����������η������϶���������밴����˳��ֱ���������û��з�������
//
//�����ʽ
//���� 3 ������ a��b �� c��
//
//�����ʽ
//����������ж��ַ�����

#include <stdio.h>
int iso(int a, int b, int c)	//����
{
	if (a == b || a == c || b == c)
	{
		return 1;
	}
	return 0;
}

int right(int a, int b, int c)	//ֱ��
{
	if (a * a + b * b == c * c)
	{
		return 1;
	}
	return 0;
}

int equal(int a, int b, int c)	//�ȱ�
{
	if (a == b && b == c & c == a)
	{
		return 1;
	}
	return 0;
}

int cosc(float a, float b, float c)	//��߶Դ��
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