#define _CRT_SECURE_NO_WARNINGS
//������ݺ��·ݣ������һ�����һ���ж����졣��Ҫ�������ꡣ
//
//�����ʽ
//�����������������ֱ��ʾ��� y ������ m���Կո������
//
//�����ʽ
//���һ��һ������������ʾ������ж����졣

#include <stdio.h>

int year_day()
{
	int yr = 0;
	int m = 0;
	scanf("%d %d", &yr, &m);
	if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0 && yr >= 400))
	{
		if (m == 2)
		{
			printf("29\n");
			return 0;
		}
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		printf("31\n");
		return 0;
	}
	if (m == 2)
	{
		printf("28\n");
		return 0;
	}
	printf("30\n");
	return 0;
}