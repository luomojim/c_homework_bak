#define _CRT_SECURE_NO_WARNINGS
//�����θ�С��һ�����񣬵��ľߵ����������ǩ�ֱʡ���֪һֻǩ�ֱʵļ۸��� 1 Ԫ 9 �ǣ�
//�������θ�С���Ǯ�� a Ԫ b �ǣ�С����֪����������������ֻǩ�ֱ��ء�
//
//�����ʽ
//����ֻ��һ�������������ֱ��ʾ a �� b��
//
//�����ʽ
//���һ��һ����������ʾС������������ֻǩ�ֱʡ�


#include <stdio.h>
#include <math.h>
#define price 19
int shopping()
{
	int yuan = 0;
	int jiao = 0;
	int total = 0;
	int num = 0;
	scanf("%d %d", &yuan, &jiao);
	total = yuan * 10 + jiao;
	num = floor((float)total / price);
	printf("%d\n", num);
	return 0;
}