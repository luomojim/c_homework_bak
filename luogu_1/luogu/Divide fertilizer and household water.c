#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ַ���ˮ��������λС���� Divide fertilizer and household water
//��Ŀ����
//������ t ������լ����ˮ��Ҫ���ָ� n ��ͬѧ��ÿ��ͬѧ��Ҫ 2 �����ӡ�
// ������֪��ÿ��ͬѧ���Ի�ö��ٺ������ϣ��ϸ�ȷ��С����� 3 λ�����Լ�һ����Ҫ���ٸ����ӡ�

//�����ʽ
//����һ��ʵ�� t ��һ�������� n��ʹ�ÿո������

//�����ʽ
//������С�

//��һ�����һ����λС������ʾ���Ի�ö��ٺ������ϡ��ڶ������һ������������ʾһ����Ҫ���ٸ����ӡ�

int Divide_fertilizer_and_household_water()
{
	double water = 0;
	int n = 0;
	scanf("%lf %d", &water, &n);
	water = water / n;
	printf("%.3lf\n%d", water, n * 2);
	return 0;
}