#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int leijia()
{
	int nums[6];//����һ���ռ�Ϊ6������
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);//����
	int i = 0;//��ʼ������
	int total[6];//����һ���ռ�Ϊ6������
	total[0] = 0;
	for (i = 1; i <= 5; i++)		//ѭ�����
	{
		total[i] = total[i - 1] + nums[i-1];// 0+1 =1, 1+2 = 3
		printf("%d\n", total[i]);
	}
	return 0;
}