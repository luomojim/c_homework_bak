#define _CRT_SECURE_NO_WARNINGS
//����һ�鹴�������÷�����ʽ������С��ǵ�����ֵ����Ҫ��Լ�֡���
//
//�����ʽ
//һ�У������������������������� a, b, c���޴�С˳�򣩡�
//
//�����ʽ
//һ�У�����һ������������С��ǵ�����ֵ

#include <stdio.h>
#include <math.h>

int tri_func()
{
	int num[5] = {0};
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (num[i] > num[i + 1])
			{
				temp = num[i + 1];
				num[i + 1] = num[i];
				num[i] = temp;
			}
		}
	}

	a = num[0];
	c = num[2];

	int x = num[0];
	int y = num[2];
	int r = 0;
	while (a != 0 && c % a != 0)		//շת�����ŷ��Լ��
	{
		r = c % a;
		c = a;
		a = r;
	}
	if (r != 0)
	{
		x = x / r;
		y = y / r;
	}
	printf("%d/%d", x, y);
	return 0;
}