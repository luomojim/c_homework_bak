#define _CRT_SECURE_NO_WARNINGS
//������������ a,b,c(0��a,b,c��100)��Ҫ�������λ������С��������

#include <stdio.h>

int paixu()
{
	int nums[3];
	int temp = 0;
	int i = 0;
	int j = 0;
	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = temp;
			}

		}

	}
	printf("%d %d %d\n", nums[0], nums[1], nums[2]);
	return 0;
}