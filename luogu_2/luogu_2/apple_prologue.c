#define _CRT_SECURE_NO_WARNINGS
//С B ϲ����ƻ������������ m��1��m��100����ƻ��������һ��ƻ����Ҫ���� t��0��t��100�����ӣ�
// ����һ�������̿�ʼ����һ��������ʱ���ȥ�� s��1��s��10000�����ӣ����������м���������ƻ����
//
//�����ʽ
//���������Ǹ�������ʾ m, t, s��
//
//�����ʽ
//���һ��������ʾ�𰸡�
#include <stdio.h>
#include <math.h>
int apple()
{
	int m = 0;
	unsigned int t = 0;
	unsigned int s = 0;
	int eat = 0;
	scanf("%d %u %u", &m, &t, &s);
	if (t == 0)
	{
		printf("0");
		return 0;
	}
	eat = ceil((float)s / (float)t);
	m = m - eat;
	if (m <= 0)
	{
		printf("0");
		return 0;
	}
	printf("%d", m);
	return 0;
}