#define _CRT_SECURE_NO_WARNINGS
//��Ŀ����
//һֻ����ڿ��ˣ�Ҫ�� 20 ��ˮ���ܽ�ʣ�������ֻ��һ���� h ���ף�����뾶Ϊ r ���׵�СԲͰ ��h �� r �������������ʴ�������Ҫ�ȶ���Ͱˮ�Ż��ʡ�

//Update�����ݸ��£��������ǽ��Ƶ�ȡԲ���� �� = 3.14��

//�����ʽ
//������һ�У�����������������һ���ո�ֿ����ֱ��ʾСԲͰ���� h �͵���뾶 r����λ�������ס�

//�����ʽ
//���һ�У�����һ����������ʾ��������Ҫ��ˮ��Ͱ����

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