#define _CRT_SECURE_NO_WARNINGS
//С B ϲ����ƻ����������Ե��� x ��ƻ����Ӣ�����ѧ���� apple ����������������䡣
//��������� 1 ��ƻ��������� Today, I ate 1 apple.�������û�гԣ���ô�Ͱ� 1 ���� 0��
//��������˲�ֹһ��ƻ���������� apple ������ʺ���Ҫ���ϴ������� s�����ܰ���������������
//
//�����ʽ
//����һ��һ����Ȼ�� x����ʾ�Ե���ƻ������

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