#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ibsn[20] = { 0 };
	int num[15];
	scanf("%s", ibsn);
	int count = 0;
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		if (ibsn[i] != '-')
		{
			num[count] = ibsn[i] - 48;
			count++;
		}
	}

	count = 0;
	for (int i = 0; i < 9; i++)
	{
		total = total + num[i] * (i+1);
	}
	total = total % 11;
	if (total == ibsn[12] - 48)	//char的数字都是ascii码表
	{
		printf("Right");
		return 0;
	}
	else if (total == 10 && ibsn[12] == 'X')
	{
		printf("Right");
		return 0;
	}
	else if (total == 10)
	{
		ibsn[12] = 'X';
	}
	else
	{
		ibsn[12] = total + 48;
	}
	printf("%s", ibsn);
	return 0;
}