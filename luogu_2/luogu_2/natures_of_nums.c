#define _CRT_SECURE_NO_WARNINGS
//һЩ��������ӵ�����µ����ʣ�
//
//���� 1����ż����
//���� 2������ 4 �Ҳ����� 12�� >  <=12
//С A ϲ������������ͬʱ������������
//Uim ϲ�������ٷ�������һ�����ʵ�������
//С B ϲ���պ��з�������һ�����ʵ�������
//����ϲ�����������������ʵ�������
// ���ڸ���һ������ x�����������Ƿ�ϲ�����������
//�����ʽ
//����һ������ x(0��x��1000)
//�����ʽ
//����� 4 �����Ƿ�ϲ��������֣����ϲ������� 1��������� 0���ÿո�ָ������˳��Ϊ��С A��Uim��С B�����á�

#include <stdio.h>
int ou(int input)
{
	int ret = 0;
	if (input % 2 == 0)
	{
		ret = 1;
		return ret;
	}
	ret = 0;
	return ret;
}

int t_f(int input)
{
	int ret = 0;
	if (input > 4 && input <= 12)
	{
		ret = 1;
		return ret;
	}
	ret = 0;
	return ret;
}


int abcd()
{
	int input = 0;
	scanf("%d", &input);
	int check_1 = 0;
	int check_2 = 0;
	check_1 = ou(input);
	check_2 = t_f(input);
	if (check_1 == 1 && check_2 == 1)//1
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if (check_1 == 1 || check_2 == 1)//2
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if ((check_1 == 1 && check_2 == 0) || (check_1 == 0 && check_2 == 1))//3
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	if (check_1 == 0 && check_2 == 0)//4
	{
		printf("1 ");
	}
	else
	{
		printf("0 ");
	}
	return 0;
}