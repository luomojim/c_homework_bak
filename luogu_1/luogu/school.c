#define _CRT_SECURE_NO_WARNINGS
//ѧУ�� yyy �ļ�֮��ľ���Ϊ s �ף��� yyy �� v ��ÿ���ӵ��ٶ���������ѧУ��

//����ѧ��·�ϣ�yyy ��Ҫ���⻨�� 10 ���ӵ�ʱ������������ࡣ

//ѧУҪ����������� 8:00 ���������ڲ��ٵ���ǰ���£�yyy ������ʲôʱ����š�

//����·;ңԶ��yyy ���ܲ��ò���ǰһ�������������ǰ��ʱ�䲻�ᳬ��һ�졣
#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int s = 0;
	unsigned int v = 0;
	unsigned int t = 0;
	unsigned int min = 0;
	unsigned int hr = 0;
	scanf("%u %u", &s, &v);

	t = ceil((float)s / (float)v) + 10;
	if (t > 480)
	{
		hr = 31 - (t / 60);	
	}
	else if (t == 480)
	{
		printf("24:00");
		return 0;
	}
	else
	{
		hr = 7 - (t / 60);
	}

	min = 60 - t % 60;	
	if (min == 60)
	{
		min = 0;
		hr++;
	}

	if (hr / 10 == 0)	
	{
		printf("0%d:", hr);
	}
	else
	{
		printf("%d:", hr);
	}
	if (min / 10 == 0)
	{
		
		printf("0%d", min);
	}
	else
	{
		
		printf("%d", min);
	}


	return 0;
}