#define _CRT_SECURE_NO_WARNINGS

//�׶ذ��˻�Ҫ���ˣ�С����ƴ����ϰ��Ӿ׼���μ���Ӿ������������С�㲢��֪�������ǲ��ܲμ�����İ��˻�ġ�

//��һ�죬С����Լ�����Ӿʱ�����˾�ȷ�ļ�ʱ�������еļ�ʱ����24Сʱ�Ƽ��㣩��
//�������Լ��� a ʱ b ��һֱ��Ӿ������� c ʱ d �֣������С�����һ�£�������һ�����˶���ʱ���أ�

//һ���������ĸ��������Կո�������ֱ��ʾ��Ŀ�е� a, b, c, d��
//һ��������������� e �� f���ÿո��������α�ʾС������һ�����˶���Сʱ���ٷ��ӡ����б�ʾ���ӵ����� f Ӧ��С�� 60��

#include <stdio.h>
int swimming()
{
	int hr = 0;
	int min = 0;
	int hr_l = 0;
	int min_l = 0;
	scanf("%d %d %d %d", &hr, &min,&hr_l,&min_l);
	int temp_min = hr * 60 + min;
	int temp_min_l = hr_l * 60 + min_l;
	int ret = temp_min_l - temp_min;
	hr = (ret / 60);
	min = ret % 60 ;
	if (min >= 60)
	{
		min = min - 60;
		hr++;
	}
	printf("%d %d", hr, min);
	return 0;
}